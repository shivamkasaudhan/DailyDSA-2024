#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};


void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void inserAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void printList(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}
int main(){
    Node* node1 = new Node(10);
    cout<<node1 -> data<<endl;
    cout<<node1 -> next<<endl;


    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    printList(head);
    inserAtTail(tail,12);
    printList(head);
    InsertAtHead(head,102);
    inserAtTail(tail,102);
    printList(head);

    return 0;
}