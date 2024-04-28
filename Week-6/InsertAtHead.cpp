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

void InsertAtHead(Node* &head, int d){
    //new node create 
    Node* temp = new Node(d);
    temp->Next = head;
    head = temp;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->Next;
    }
    cout<<endl;

}
int main(){
    Node* node1 = new Node(10);
    Node* head= node1;
    InsertAtHead(node1,5);
    print(node1);
    InsertAtHead(node1,15);
    print(node1);



    return 0;
}