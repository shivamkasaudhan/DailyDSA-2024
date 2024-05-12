#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//length 
int getLength(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}


//insert at head
void insertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next =head;
    head->prev =temp;
    head=temp;
}
//insert at tail 
void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev= tail;
    tail = temp;
}
//insert at any position 
void insertAtPosition(Node* &head, Node* &tail, int data,int position){
    if(position ==1){
        insertAtHead(head,data);
        return ;
    }
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    cout<<getLength(head)<<endl;
    insertAtHead(head,10);
    insertAtHead(head,11);
    insertAtTail(tail,9);
    insertAtTail(tail,8);

    insertAtPosition(head,tail,7,3);
    print(head);
    return 0;
}