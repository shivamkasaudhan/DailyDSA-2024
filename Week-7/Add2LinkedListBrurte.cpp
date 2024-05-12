//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    private:
    Node* reverse(Node* head){
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        while(curr!= NULL){
            next = curr->next;
            curr ->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    void insertAtTail(struct Node* &head, struct Node* &tail, int d){
        Node* temp = new Node(d);
        if(head==NULL){
            head=temp;
            tail=temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
    }
    struct Node* add(struct Node* num1, struct Node* num2){
        int carry =0;
        
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        
        while(num1!=NULL && num2!= NULL){
            int sum= carry+num1->data+num2->data;
            int digit = sum%10;
            
            // Node* temp new Node(digit);
            insertAtTail(ansHead,ansTail,digit);
            carry= sum/10;
            num1=num1->next;
            num2=num2->next;
        }
        while(num1!=NULL){
            int sum = carry+num1->data;
            int digit = sum%10;
            insertAtTail(ansHead,ansTail,digit);
            carry = sum/10;
            num1=num1->next;
        }
        while(num2!=NULL){
            int sum = carry+num2->data;
            int digit = sum%10;
            insertAtTail(ansHead,ansTail,digit);
            carry = sum/10;
            num2=num2->next;
        }
        while(carry!=0){
            int sum = carry;
            int digit = sum%10;
            insertAtTail(ansHead,ansTail,digit);
        }
        return ansHead;
    }
    public:
     
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        // code here
        //step 1
        num1 = reverse(num1);
        num2 = reverse(num2);
        //step 2 add 2 linked list
        Node* ans = add(num1,num2);
        ans = reverse(ans);
        return ans;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* num1 = buildList(n);
        
        cin>>m;
        Node* num2 = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(num1,num2);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends