#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        if(this->next!= NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node eith data "<<value<<endl;
    }
};


void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
} 
//insert at head
void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
//insert at tail 
void insertAttail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail=temp;
}
//insert at position 
void insertAtPosition(Node* &head,Node* &tail, int data, int position){
    
    if(position ==1){
        insertAtHead(head,data);
        return ;
    }
    Node* temp = head;
    int count =1;
    while(count<position-1){
        temp = temp->next;
        count++;
    }

    if(temp->next==NULL){
        insertAttail(tail,data);
        return;
    }
    Node* NodeToInsert = new Node(data);
    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;

}
//deletion 
void deleteNode(Node* &head,int position){
    //first node
    if(position ==1){
        Node* temp = head;
        head = head->next;
        temp->next =NULL;
        delete temp;
    }else{
        //any or last node
        Node* curr =head;
        Node* prev = NULL;
        int count =1;
        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next=NULL;
        delete curr;

    }
}
int main(){
    Node* node1 = new Node(1);
    Node* head=node1;
    Node* tail = node1;
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    insertAtHead(head,5);
    insertAtHead(head,25);
    insertAtHead(head,15);
    print(head);
    cout<<endl;
    insertAttail(tail,12);
    insertAttail(tail,120);
    insertAttail(tail,10);
    print(head);
    cout<<endl;
    insertAtPosition(head,tail,30,1);
    print(head);
    cout<<endl;
    insertAtPosition(head,tail,30,4);
    print(head);
    cout<<endl;
    insertAtPosition(head,tail,3,10);
    print(head);
    cout<<endl;
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    deleteNode(head,1);
    deleteNode(head,9);
    cout<<endl;
    print(head);
    return 0;
}