#include <iostream>
using namespace std;
int search(int arr[], int key, int n){
    //base case
    if(n == 0){
        return false;
    }else if(arr[0] == key){
        return true;
    }
    return search(arr+1,key,n-1);
}
int main(){
    int arr[5] = {1,2,3,4,89};
    int key = 8;
    cout<<search(arr,key,5);
    return 0;
}