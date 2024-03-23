#include <iostream>
using namespace std;
void print(int *a, int n ){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int partition(int *a,int s, int e){
    int pivot =a[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(a[i]<=pivot){
            count++;
        }
    }
    //place pivot ar right position
    int pivotIndex = s+count;
    swap(a[s],a[pivotIndex]);


    //left right part handling 
    int i =s;
    int j =e;
    while(i < pivotIndex && j>pivotIndex){
        while(a[i]<pivot){
            i++;
        }
        while(a[j]>pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(a[i++],a[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int *a,int s,int e){
    //base case
    if(s>=e){
        return ;
    }
    int p = partition(a,s,e);
    cout<<p<<endl;//optional
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);

}
int main(){
    int n[5]={1,2,0,1,3};
    print(n,5);
    quickSort(n,0,4);
    print(n,5);
    return 0;
}