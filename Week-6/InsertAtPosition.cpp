#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* Next;
    Node(int data){
        this->data=data;
        this->Next= NULL;
    }
};
void print(Node* &head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->Next;
    }
    cout<<endl;
}
void insertAtPosition(int position, Node* &head,int data){
    Node* temp = head;
    int count = 1;
    while(count<position-1){
        temp = temp->Next;
        count++;
    }
    Node* nodeToInsert = new Node(data);
    nodeToInsert->Next = temp->Next;
    temp->Next= nodeToInsert;

}
void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> Next = temp;
    tail = temp;
}
int main(){
    Node* head= new Node(10);
    Node* tail = head;
    insertAtTail(tail,5);
    print(head);
    insertAtPosition(1,head,2);
    insertAtPosition(1,head,22);
    print(head);
    return 0;
}