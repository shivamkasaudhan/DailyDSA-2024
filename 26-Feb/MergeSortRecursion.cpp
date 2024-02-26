#include <iostream>
using namespace std;
void print(int *arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void merge(int *arr, int s, int e){
    int mid  = s+(e-s)/2;
    int len1 = mid -s +1;
    int len2 = e -mid;
    
    int *first = new int[len1];
    int *second = new int[len2];
    // copy values
    int mainIndexArr = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[mainIndexArr++];
    }
    for(int i = 0; i < len2; i++){
        second[i] = arr[mainIndexArr++];
    }

    //merge 2 sorted array 
    int index1 = 0;
    int index2 = 0;
    mainIndexArr = s;
    while (index1<len1 && index2<len2){
        if(first[index1] < second[index2]){
            arr[mainIndexArr++] = first[index1++];
        }else{
            arr[mainIndexArr++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[mainIndexArr++] = first[index1++];
    }
    while (index2<len2)
    {
        arr[mainIndexArr++] = second[index2++];
        
    }
    delete[] first;
    delete[] second;
}
void mergeSort(int *arr, int s, int e){
    //base case
    if(s>=e){
        return ;
    }
    int mid  = s+(e-s)/2;
    //left 
    mergeSort(arr,s,mid);
    //right
    mergeSort(arr,mid+1,e);
    //merge
    merge(arr,s,e);
}
int main(){
    int arr[6]={38,27,9,43,82,10};
    cout<<"Brfore: ";
    print(arr,6);
    cout<<endl<<"After: ";
    mergeSort(arr,0,5);
    print(arr,6);
    return 0;
}