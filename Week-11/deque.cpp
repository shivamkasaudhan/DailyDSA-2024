#include <iostream>
#include <queue>
using namespace std;
int main(){
    deque<int>d;
    d.push_front(12);
    d.push_back(11);
    d.push_back(1);
    cout<<d.front()<<endl;
    d.pop_front();
    cout<<d.back()<<endl;
    d.pop_back();
    cout<<d.empty()<<endl;

    return 0;
}