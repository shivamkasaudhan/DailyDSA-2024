//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) {
        // Code here
        int direction = 0;
        
        // Current position
        int i = 0, j = 0;
        
        while (true) {
            if (matrix[i][j] == 1) {
                // Change direction to the right
                direction = (direction + 1) % 4;
                // Mark the current cell as 0
                matrix[i][j] = 0;
            } else {
                // Move according to the current direction
                if (direction == 0) j++;
                else if (direction == 1) i++;
                else if (direction == 2) j--;
                else if (direction == 3) i--;
            }
            
            // Check if exit point reached
            if (i < 0 || i >= n || j < 0 || j >= m) {
                // Adjust the position to be within the matrix
                if (i < 0) i = 0;
                else if (i >= n) i = n - 1;
                if (j < 0) j = 0;
                else if (j >= m) j = m - 1;
                break;
            }
        }
        
        return {i, j};
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        vector<int> ans = obj.FindExitPoint(n, m, matrix);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends