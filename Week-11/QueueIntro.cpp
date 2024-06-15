#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(9);
    cout<<"Size :"<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<"Size :"<<q.size()<<endl;
    cout<<q.empty()<<endl;

    return 0;
}