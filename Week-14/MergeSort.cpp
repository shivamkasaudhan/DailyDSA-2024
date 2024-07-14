#include <iostream>
#include <vector>
using namespace std;
int merge(vector<int> &a, int l, int mid, int r){
    int n1 = mid -l+1;
    int n2 = r-mid;
    int count =0;
    vector<int>b(n1);
    vector<int>c(n2);
    for(int i=0;i<n1;i++){
        b[i] = a[l+i];
    }
    for(int i=0;i<n2;i++){
        c[i] =a[mid+i+1]; 
    }
    int i=0;
    int j = 0;
    int k =l;
    while(i<n1 && j<n2){
        if(b[i]<=c[j]){
            a[k++] = b[i++];
        }else{
            a[k++]=c[j++];
            count+=mid-i-l+1;
        }
    }
    while(i<n1){
        a[k++] = b[i++];
    }
    while(j<n2){
        a[k++] = c[j++];
    }
    return count;
}
int mergeSort(vector<int> &a,int l,int r){
    int count =0;
    if(l<r){
        int mid = l+(r-l)/2;
        count+=mergeSort(a,l,mid);
        count+=mergeSort(a,mid+1,r);
        count+=merge(a,l,mid,r);
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count =mergeSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<count<<endl;
    return 0;
}