#include <iostream>
using namespace std;
bool binarySearch(int arr[], int key, int s, int e){
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;
    if(arr[mid] = key){
        return true;
    }
    if(arr[mid] > key){
        return binarySearch(arr, key, s,mid-1);
    }else{
        return binarySearch(arr, key, mid+1,e);
    }
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int n = 6;
    int key = 6;
    int s = 0;
    int e = n-1;
    cout<<binarySearch(arr,key,s,e)<<endl;
    return 0;
}