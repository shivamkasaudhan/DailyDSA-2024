#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(10);
    s.push(12);

    s.pop();
    cout<<s.top();
    if(s.empty()){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    cout<<endl<<s.size()<<endl;

    return 0;
}