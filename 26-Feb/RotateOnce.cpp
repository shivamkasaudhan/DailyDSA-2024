#include <bits/stdc++.h> 
void rotate(vector<int>& arr, int n) {
    // Write your code here
    vector<int> temp = arr;
    for(int i = 0; i < n-1; i++){
        arr[i+1] = temp[i];
    }
    arr[0]= temp[n-1]; 
}