#include <iostream>
using namespace std;
void reverse(string& s,int i,int j){
    //base case
    if(i>j){
        return ;
    }
    swap(s[i++],s[j--]);
    // i++;
    // j--;
    reverse(s,i,j);
}
int main(){
    string s= "shivam";
    reverse(s,0,5);
    cout<<s<<endl;
    return 0;
}