//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int> ans;
        int startR= 0;
        int startC=0;
        int endR = n-1;
        int endC=m-1;
        if(n==1){
            for(int i=0;i<m;i++){
                ans.push_back(matrix[0][i]);
            }
            return ans;
        }
        if(m==1){
            for(int i=0;i<n;i++){
                ans.push_back(matrix[i][0]);
            }
            return ans;
        }
        for(int i =startC;i<endC;i++){
            ans.push_back(matrix[startR][i]);
        }
        for(int i =startR;i<endR;i++){
            ans.push_back(matrix[i][endC]);
        }
        for(int i =endC;i>startC;i--){
            ans.push_back(matrix[endR][i]);
        }
        for(int i =endR;i>startR;i--){
            ans.push_back(matrix[i][startC]);
        }
        return ans;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends