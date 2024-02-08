#include <iostream>
using namespace std;
int power(int n, int r){
    if(r==0){
        return 1;
    }
    return n*power(n,r-1);
}
int main(){
    int n;
    cin>>n;
    int r;
    cin>>r;
    cout<<power(n,r);
    return 0;
}