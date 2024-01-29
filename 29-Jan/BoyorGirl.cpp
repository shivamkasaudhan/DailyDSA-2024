#include <iostream>
using namespace std;
int main(){
    string  n;
    cin>>n;
    if(n.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}