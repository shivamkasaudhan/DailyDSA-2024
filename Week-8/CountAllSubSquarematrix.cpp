//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSquares(int N, int M, vector<vector<int>> &matrix) {
        // code here
        int ans =0;
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(i>0 && j>0 && matrix[i][j]==1){
                    matrix[i][j] = 1+min({matrix[i-1][j] , matrix[i][j-1], matrix[i-1][j-1]});
                }
                ans += matrix[i][j];
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;

        vector<vector<int>> matrix(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> matrix[i][j];
            }
        }
        Solution obj;
        cout << obj.countSquares(N, M, matrix) << endl;
    }
    return 0;
}
// } Driver Code Ends