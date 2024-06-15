//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int countElements(int N, int A[]) {
        // code here
        int diff = N-2;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        unordered_map<int,int>mp;
        for(int i=0;i<N;i++){
            mp[A[i]]++;
            maxi = max(A[i],maxi);
            mini = min(mini,A[i]);
        }
        int repeat =0;
        for(auto it : mp){
            if(it.second>1){
                repeat +=(it.second-1);
            }
        }
        return maxi-mini-diff+repeat-1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];
        Solution ob;
        cout << ob.countElements(N, A) << "\n";
    }
}
// } Driver Code Ends