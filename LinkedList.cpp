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

int main()
{
    Node *node1 = new Node(2);
    cout << node1->data << endl;
    cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;
    // insertAtHead(head,3);
    // insertAtHead(head,4);
    // insertAtHead(head,5);
    // insertAtHead(head,6);
    // insertAtHead(head,7);

    insertAtTail(tail, 3);
    insertAtTail(tail, 4);
    insertAtTail(tail, 5);
    insertAtTail(tail, 6);
    insertAtTail(tail, 7);

    insertAtPosition(head,tail, 1, 1);
    print(head);

    cout<<"Head = "<<head->data<<endl;
    cout<<"Tail = "<<tail->data<<endl;

    deleteNode(head,3);
    print(head);
    cout<<"Head = "<<head->data<<endl;
    return 0;
}