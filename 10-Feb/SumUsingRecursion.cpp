#include <iostream>
using namespace std;
int sum(int arr[],int n){
    if(n==1){
        return arr[0];
    }else if(n==2){
        return arr[0]+arr[1];
    }else{
        return sum(arr+2,n-2);
    }
}
int main(){
    int arr[6] = {1,5,7,8,9,8};
    cout<<sum(arr, 6)<<endl;
    return 0;
}