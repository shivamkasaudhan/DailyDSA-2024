//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int m[4][3]={{1,2,3},{4,5,6},{7,8,9},{-1,0,-1}};
    long long solve(int row,int col,int n,vector<vector<long long>>& dp){
        if(n==1) return 1;
        if(dp[m[row][col]][n]!=-1) return dp[m[row][col]][n];
        long long a=solve(row,col,n-1,dp);
        long long b,c,d,e;
        b=c=d=e=0;
        // Check up
        if (row - 1 >= 0 && m[row - 1][col] != -1) {
            b=solve(row-1,col,n-1,dp);
        }
    // Check down
        if (row + 1 <= 3 && m[row + 1][col] != -1) {
            c=solve(row+1,col,n-1,dp);
        }
    // Check left
        if (col - 1 >= 0 && m[row][col - 1] != -1) {
            d=solve(row,col-1,n-1,dp);
        }
    // Check right
        if (col + 1 <= 2 && m[row][col + 1] != -1) {
            e=solve(row,col+1,n-1,dp);
        }
        return dp[m[row][col]][n]=a+b+c+d+e;
    }
    long long getCount(int n) {
        // Your code goes here
        long long ans=0;
        vector<vector<long long>> dp(10,vector<long long> (n+1,-1));
        for(int i=0;i<4;i++){
            for(int j=0;j<3;j++){
                if(m[i][j]!=-1){
                    ans+=solve(i,j,n,dp);
                }
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
        int n;
        cin >> n;

        Solution ob;
        cout << ob.getCount(n) << "\n";
    }
    return 0;
}

// } Driver Code Ends