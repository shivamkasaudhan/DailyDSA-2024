//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        // Code here
        int ans = 0;
        int n = matrix.size();
        int m = matrix[0].size();

        queue<pair<int,int>>q;
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == 0){
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            auto it =q.front();
            q.pop();
            int x=it.first;
            int y = it.second;
            if(x>0 && matrix[x-1][y]==1) ans++;
            if(x<n-1 && matrix[x+1][y]==1) ans++;
            if(y>0 && matrix[x][y-1]==1) ans++;
            if(y<m-1 && matrix[x][y+1]==1) ans++;
        }
        return ans;
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
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends