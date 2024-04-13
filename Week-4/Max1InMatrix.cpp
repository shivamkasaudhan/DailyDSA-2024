//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int N) {
    int index = -1;
    int max = -1;
    for (int i = 0; i < N; i++) {
        int count_ones = 0;
        for (int j = 0; j < N; j++) {
            if (mat[i][j] == 1) {
                count_ones++;
            }
        }
        if (count_ones > max) {
            max = count_ones;
            index = i;
        }
    }
    return {index, max};
}

};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int> (n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        Solution obj;
        vector<int> ans = obj.findMaxRow(arr, n);
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends