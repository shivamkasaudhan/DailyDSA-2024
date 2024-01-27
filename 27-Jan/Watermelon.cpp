#include <iostream>
#include <string>
using namespace std;
string Watermelon(int n){
    if(n % 2 == 0){
        return "YES";
    }
    return "NO";
}
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<Watermelon(n);
    return 0;
}