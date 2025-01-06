#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    // create new node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

int lengthoflinkedList(Node* &head){
    Node*temp=head;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int middleElement(Node*&head){

    int len=lengthoflinkedList(head);
    int middleIndex=(len/2);

    Node*temp=head;
    int cnt=0;
    while(cnt<middleIndex){
        temp=temp->next;
        cnt++;
    }
    return temp->data;

    

}

void insertAtPosition(Node *&head,Node*& tail, int position, int d)
{
    // Insert at Start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at Last position
    if(temp->next==NULL){}
    {
        insertAtTail(tail, d);
        return;
    }

    // Createing a node for d
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}


void deleteNode(Node* &head,int position){

    // deleting starting Node
    if(position==1){
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    // Deleting middle or ending Node
    else{
        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        delete curr;
    }

}

Node* floydDetectionLoop(Node* &head){

    if(head==NULL) return NULL;

    Node*slow=head;
    Node*fast=head;

    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            // cout<<"Cycle is present at "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;    
}


Node* getStartingNode(Node* head){
    if(head==NULL) return NULL;

    if(floydDetectionLoop(head)){
        Node*slow=head;
    Node*intersectionNode=floydDetectionLoop(head);

    while(slow!=intersectionNode){
        slow=slow->next;
        intersectionNode=intersectionNode->next;
    }
    return slow;
    }
    else{
        return NULL;
    }

}

int main()
{
    Node *node1 = new Node(1);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,6);
    insertAtHead(head,7);

    insertAtTail(tail, 3);
    insertAtTail(tail, 4);
    insertAtTail(tail, 5);
    // insertAtTail(tail, 6);
    // insertAtTail(tail, 7);

    // insertAtPosition(head,tail, 1, 1);
    print(head);

    cout<<"Head = "<<head->data<<endl;
    cout<<"Tail = "<<tail->data<<endl;

    // deleteNode(head,3);
    // print(head);
    // cout<<"Head = "<<head->data<<endl;
    // cout<<"Length of the Linked List is : "<<lengthoflinkedList(head)<<endl;
    // int len=lengthoflinkedList(head);
    // cout<<"Middle element of the Linked List is : "<<middleElement(head);

    tail->next=head->next;
    // print(head);
    if(floydDetectionLoop(head)){
        cout<<"Cycle detected"<<endl;
        cout<<"Starting Node is "<<getStartingNode(head)->data<<endl;
    }
    else{
        cout<<"No cycle detected"<<endl;
    }
}