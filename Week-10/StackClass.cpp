#include <iostream>
using namespace std;
class Stack{
    //properties
    public:
    int *arr;
    int top;
    int size;
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top =-1;
    }
    void push(int ele){
        if(size-top>1){
            top++;
            arr[top] = ele;
        }else{
            cout<<"Satck OverFlow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"Stack Underflow"<<endl;
        }
    }
    void peek(){
        if(top>=0 && top<size){
            cout<<arr[top]<<endl;
        }else{
            cout<<"Stack is empty"<<endl;
        }
    }
    bool empty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
    }


    //behaviour


};
int main(){
    Stack st(5);
    st.push(22);
    st.push(22);
    st.push(22);
    st.push(22);
    st.push(22); 
    st.push(25);
    st.peek();
    cout<<st.empty()<<endl;
    st.pop();
    st.peek();
    st.pop();
    st.peek();
    st.pop();
    st.peek();
    cout<<st.empty()<<endl;

    return 0;
}