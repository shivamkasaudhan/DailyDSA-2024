#include <iostream>
using namespace std;
bool check(string s,int i){
    int n = s.size();
    if(i>n-i-1){
        return true;
    }
    if(s[i] != s[n-i-1]){
        return false;
    }else{
        return check(s,i++);
    }
}
int main(){
    string s ="aa";
    cout<<check(s,0)<<endl;
    return 0;
}