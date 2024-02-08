#include <iostream>
using namespace std;
//head recursion
void print1(int n){
    if(n==0){
        return ;
    }
    print1(n-1);
    cout<<n<<endl;
}
// tail recursion
void print2(int n){
    //base case
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    //recursive relation
    print2(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    print1(n);
    print2(n);
    return 0;
}