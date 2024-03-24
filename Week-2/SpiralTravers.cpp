//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> ans;
        int startR =0;
        int startC =0;
        int endR = r-1;
        int endC = c-1;
        
        
        while(startR<=endR && startC<=endC){
            for(int i = startC; i<=endC;i++){
                ans.push_back(matrix[startR][i]);
                
            }
            startR++;
            for(int i = startR; i<=endR;i++){
                ans.push_back(matrix[i][endC]);
               
            }
            endC--;
            
            if(startR<=endR){
                for(int i = endC;i>=startC;i--){
                    ans.push_back(matrix[endR][i]);
                
                }
                endR--;
            }
            if(startC<=endC){
                for(int i = endR; i>=startR;i--){
                    ans.push_back(matrix[i][startC]);
                }
                startC++;
            }
            
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
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends