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
        this->next = NULL; // Initialize next as NULL
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void inserAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtAnyPosition(Node *&head, Node *&tail, int d, int position)
{

    Node *temp = new Node(d);
    Node *prev = head;

    // Inserting at Head is pos=1
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    int count = 1;
    while (count < position - 1)
    {
        prev = prev->next;
        count++;
    }

    // inserting at tail if pos=last (i.e. prev->next==NULL)
    if (prev->next == NULL)
    {
        inserAtTail(tail, d);
        tail = temp;
        return;
    }

    temp->next = prev->next;
    prev->next = temp;
}

void reverseLinkedList(Node *&head, Node *&tail)
{
    Node *prev = head;
    Node *curr = head->next;
    while (curr != tail)
    {

        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    swap(head, tail);

}

void printLinkedList(Node *&head)
{
    Node *temp = head;
    cout << "The Linked List is : ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(Node *&head, int position)
{
    if (position == 1)
    {
        Node *curr = head;
        head = head->next;
        delete curr;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int count = 1;
        while (count <= position - 1)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(1);
    cout << "Data of node1 = " << node1->data << endl;
    cout << "Next of node1 = " << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);

    inserAtTail(tail, 2);
    inserAtTail(tail, 3);
    inserAtTail(tail, 4);
    inserAtTail(tail, 5);
    // inserAtTail(tail,6);

    insertAtAnyPosition(head, tail, 6, 10);

    cout << "Before Deleting node on position 5 " << endl;
    printLinkedList(head);

    deleteNode(head, 5);
    cout << "After Deleting node on position 5 " << endl;
    printLinkedList(head);

    cout << "Head of the LL is : " << head->data << endl;
    cout << "Tail of the LL is : " << tail->data << endl;

    // cout<<endl<<endl<<endl<<endl;
    // reverseLinkedList(head, tail);
    // cout << "Head of the LL is : " << head->data << endl;
    // cout << "Tail of the LL is : " << tail->data << endl;
    // printLinkedList(head);

    return 0;
}