#include <iostream>
using namespace std;
int sum(int arr[],int n){
    if(n==1){
        return arr[0];
    }else{
        return arr[0]+sum(arr+1,n-1);
    }
}
int main(){
    int arr[6] = {1,5,7,8,9,8};
    cout<<sum(arr, 6)<<endl;
    return 0;
}