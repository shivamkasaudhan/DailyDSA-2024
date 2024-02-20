//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
        int maxCoins(int N, vector <int> &a)
        {
                // write your code here
                vector<int> V(N+2);
                V[0] = V[N+1] = 1;
                for(int i = 0; i < N; i++){
                    V[i+1] = a[i];
                }
                vector<vector<int>> dp(N+2, vector<int>(N+2));
                for(int i = N; i > 0; i--){
                    for(int j = i; j < N+1; j++){
                        int cost  = 0;
                        for(int k = i; k < j+1; k++){
                            int currentCost  = V[k]*V[i-1]*V[j+1] + dp[i][k-1] + dp[k+1][j];
                            cost = max(cost,currentCost);
                        }
                        dp[i][j] = cost;
                    }
                }
                return dp[1][N];
        }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution S;
        cout<<S.maxCoins(n,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends