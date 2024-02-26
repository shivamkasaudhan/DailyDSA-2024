#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

int size(Node *head){
    int count = 0;
    Node *temp = head;
    while(temp!= NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
Node *findMiddle(Node *head) {
    // Write your code here
    int n = size(head);
    int time = n/2;
    Node *temp = head;
    while(time--){
        temp = temp->next;
    }
    head = temp;
    return head;
}

