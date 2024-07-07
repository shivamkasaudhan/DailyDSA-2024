//tle 
class Solution {
public:
int totalWays(int cr,int cc, int r,int c){
    if(cr>r || cc>c){
        return 0;
    }
    if(cr==r && cc ==c){
        return 1;
    }
    return totalWays(cr,cc+1,r,c)+totalWays(cr+1,cc,r,c);
}
    int uniquePaths(int m, int n) {
        return totalWays(0,0,m-1,n-1);
    }
};
//using dp
//100% beats
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            dp[i][0]=1;
        }
        for(int i=0;i<n;i++){
            dp[0][i]=1;
        }
        for(int i =1;i<m;i++){
            for(int j =1;j<n;j++){
                dp[i][j]= dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};