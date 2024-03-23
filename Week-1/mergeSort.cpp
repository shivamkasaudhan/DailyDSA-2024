//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    int merge(int arr[], int l, int m, int r)
    {
         // Your code here
    int len1 = m -l +1;
    int len2 = r -m;
    int swaps =0;
    
    int *first = new int[len1];
    int *second = new int[len2];
    // copy values
    int mainIndexArr = l;
    for(int i = 0; i < len1; i++){
        first[i] = arr[mainIndexArr++];
    }
    for(int i = 0; i < len2; i++){
        second[i] = arr[mainIndexArr++];
    }

    //merge 2 sorted array 
    int index1 = 0;
    int index2 = 0;
    mainIndexArr = l;
    while (index1<len1 && index2<len2){
        if(first[index1] < second[index2]){
            arr[mainIndexArr++] = first[index1++];
        }else{
            arr[mainIndexArr++] = second[index2++];
            swaps+=len1-index1;
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
    return swaps;
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        //base case
    if(l>=r){
        return ;
    }
    int m = l+(r-l)/2;
    int mid  = r+(l-r)/2;
    //left 
    mergeSort(arr,l,m);
    //right
    mergeSort(arr,m+1,r);
    //merge
    merge(arr,l,m,r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends







