#include <iostream>
using namespace std;

//merge 2 array
void merge(int *a, int s, int e){
    int mid  = s+(e-s)/2;

    //lenth of first array
    int len1 = mid - s+1;
    //length of second array
    int len2 = e- mid;

    //initilising first array
    int *first = new int[len1];
    //initialising second array
    int *second = new int[len2];


    int mainIndexArr = s;
    //copy values
    for(int i=0;i<len1;i++){
        first[i]= a[mainIndexArr++];
    }
    for(int i=0;i<len2;i++){
        second[i]= a[mainIndexArr++];
    }

    //merge array

    int index1 = 0;
    int index2 = 0;
    mainIndexArr=s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            a[mainIndexArr++] = first[index1++];
        }else{
            a[mainIndexArr++]= second[index2++];
        }
    }
    while(index1<len1){
        a[mainIndexArr++] = first[index1++];
    }
    while(index2<len2){
        a[mainIndexArr++]= second[index2++];
    }
    delete[] first;
    delete[] second;

}

//merge sort function 
void mergeSort(int *a,int s, int e){

    //base case
    if(s>=e){
        return ;
    }
    int mid = s+(e-s)/2;

    //left part sort
    mergeSort(a,s,mid);
    //right part sort
    mergeSort(a,mid+1,e);

    //merge array
    merge(a,s,e);

}
//print function 
void print(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[5] = {2,9,1,0,3};
    print(a,5);
    mergeSort(a,0,5);
    print(a,5);
    
    return 0;
}