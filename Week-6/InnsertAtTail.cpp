#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* Next;
    Node(int data){
        this->data=data;
        this->Next = NULL;
    }
};
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->Next;
    }
    cout<<endl;
}
void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> Next = temp;
    tail = temp;
}
int main(){
    Node* node1 = new Node(10);
    Node* head= node1;
    Node* tail = node1;
    insertAtTail(tail,15);
    print(head);
    return 0;
}