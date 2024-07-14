#include <iostream>
#include <queue>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        
    }
}
void inorder(Node* root){
    if(root ==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void Preorder(Node* root){
    if(root ==NULL){
        return ;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}
void Postorder(Node* root){
    if(root ==NULL){
        return ;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}
Node* insertIntoBST(Node* root, int d){
    if(root==NULL){
        root = new Node(d);
        return root;
    }
    if(d>root->data){
        root->right = insertIntoBST(root->right,d);
    }else{
        root->left = insertIntoBST(root->left,d);
    }
    return root;
}
void takeInput(Node* &root){
    int d;
    cin>>d;
    while(d!=-1){
        root = insertIntoBST(root,d);
        cin>>d;
    }
}
Node* minVal(Node* root){
    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}
Node* deleteFromBST(Node* root, int val){
    if(root == NULL ){
        return NULL;
    }
    if(root->data == val){
        // 0 child 
        if(root->left ==NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        //1 child 
        // left child is NULL
        if(root->left ==NULL && root->right !=NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        //rigth child is NULL
        if(root->left!=NULL && root->right ==NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //if 2 child 
        if(root->left !=NULL && root->right != NULL){
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right,mini);
            return root;
        }
    }else if(root->data >val){
        root->left = deleteFromBST(root->left,val);
        return root;
    }else{
        root->right = deleteFromBST(root->right, val);
        return root;
    }
    return root;
}

int main(){
    Node* root = NULL;
    cout<<"Enter Value to create BST: ";
    takeInput(root);
    cout<<"Printing BST"<<endl;
    levelOrderTraversal(root);cout<<endl;
    inorder(root);cout<<endl;
    Preorder(root);cout<<endl;
    Postorder(root); cout<<endl;
    cout<<"Deleting value 3"<<endl;
    deleteFromBST(root,3);
    inorder(root);cout<<endl;
    levelOrderTraversal(root);cout<<endl;


    return 0;
}