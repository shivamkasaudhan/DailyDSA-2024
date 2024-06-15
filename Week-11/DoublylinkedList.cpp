#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        prev = NULL;
        next = NULL;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// length
int len(Node *head)
{
    Node *temp = head;
    int l = 0;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}

// insert at head
void insertAthead(Node *&head,Node* &tail,int d)
{
    Node *insert = new Node(d);
    if (head == NULL)
    {
        head = insert;
        tail = insert;
    }
    else
    {
        insert->next = head;
        head->prev = insert;
        head = insert;
    }
}
// insert at tail
void insertAttail(Node* &head, Node *&tail, int d)
{
    Node *insert = new Node(d);
    if (tail == NULL)
    {
        head = insert;
        tail = insert;
    }
    else
    {
        tail->next = insert;
        insert->prev = tail;
        tail = insert;
    }
}

// insert at any position
void insertAtPosition(Node *&tail, Node *&head, int d, int p)
{
    if (p == 1)
    {
        insertAthead(head,tail, d);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < p - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAttail(head,tail, d);
        return;
    }

    Node *insert = new Node(d);
    insert->next = temp->next;
    temp->next->prev = insert;
    temp->next = insert;
    insert->prev = temp;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    cout << len(head) << endl;
    insertAthead(head,tail, 9);
    print(head);
    insertAthead(head,tail, 8);
    print(head);
    insertAthead(head,tail, 7);
    print(head);
    insertAttail(head, tail, 6);
    print(head);
    insertAttail(head,tail, 3);
    print(head);
    insertAtPosition(tail, head, 3, 1);
    print(head);
    insertAtPosition(tail, head, 2, 4);
    print(head);
    return 0;
}