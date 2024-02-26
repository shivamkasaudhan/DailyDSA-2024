#include <iostream>
using namespace std;
void reverse(string& s, int i){
    int n = s.size();
    if(i>(n-i-1)){
        return ;
    }
    cout<<s<<endl;
    swap(s[i],s[n-i-1]);
    i++;
    reverse(s,i);
    cout<<s<<endl;
}
int main(){
    string name ="shivam";
    reverse(name, 0);
    cout<<name<<endl;
    return 0;
}