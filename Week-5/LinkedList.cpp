#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* Next;
    Node(int data){
        this->data = data;
        this->Next = NULL;
    }
};
int main(){
    Node*node1 = new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->Next<<endl;
    return 0;
}