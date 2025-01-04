#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtRight(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;

}

void insertAtLeft(Node* &head,int d){
    Node * temp=new Node(d);
    head->prev=temp;
    temp->next=head;
    head=temp;
}

void insertAtPosition(Node* &head,int d,int pos){
    Node*temp=head;
    Node*nodeToAdd=new Node(d);
    
    if(pos==1){
        insertAtLeft(head,d);
        return;
    }
    int count=1;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    Node*left=temp;

    nodeToAdd->next=left->next;
    left->next=nodeToAdd;
    nodeToAdd->prev=left;

}

void printDoublyLinkedList(Node*head){
    Node* temp=head;
    cout<<"Doubly Linked List : ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node * node1=new Node(0);
    Node*head=node1;
    Node*tail=node1;
    
    insertAtRight(tail,1);
    insertAtRight(tail,2);
    insertAtRight(tail,3);
    insertAtLeft(head,1);
    insertAtLeft(head,2);
    insertAtLeft(head,3);
    insertAtLeft(head,4);

    insertAtPosition(head,5,1);

    printDoublyLinkedList(head);

    cout<<"Head of Doubly Linked List : "<<head->data<<endl;
    cout<<"Tail of Doubly Linked List : "<<tail->data<<endl;
    

    
    return 0;
}