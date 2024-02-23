//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
        unordered_map<int, int> freq;
        for(int i = 0; i <n; i++){
            freq[arr[i]]++;
        }
        int mini = INT_MAX;
        for(auto it : freq){
            mini = min(mini,it.second);
        }
        int maxi = INT_MIN;
        for(auto it : freq){
            if(it.second == mini){
                maxi = max(maxi,it.first);
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends