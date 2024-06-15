//{ Driver Code Starts
#include <iostream>
using namespace std;

long long int longestSubarry(long long int *arr, long long int n);

// Driver code
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << longestSubarry(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends

#include <stack>
long long int longestSubarry(long long int A[], long long int N) {
    stack<long long int>st;
    long long int count =0;
    long long int num =0;
    for(int i =0;i<N;i++){
        if(A[i]>0){
            st.push(A[i]);
            num++;
        }else{
            count = max(count,num);
            while(!st.empty()){
                st.pop();
            }
            num =0;
        }
    }
    count = max(num,count);
    return count;
}