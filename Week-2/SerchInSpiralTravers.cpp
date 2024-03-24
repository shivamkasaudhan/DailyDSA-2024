//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		vector<int> ans;
        int startR =0;
        int startC =0;
        int endR = n-1;
        int endC = m-1;
        
        
        while(startR<=endR && startC<=endC){
            for(int i = startC; i<=endC;i++){
                ans.push_back(a[startR][i]);
                
            }
            startR++;
            for(int i = startR; i<=endR;i++){
                ans.push_back(a[i][endC]);
               
            }
            endC--;
            
            if(startR<=endR){
                for(int i = endC;i>=startC;i--){
                    ans.push_back(a[endR][i]);
                
                }
                endR--;
            }
            if(startC<=endC){
                for(int i = endR; i>=startR;i--){
                    ans.push_back(a[i][startC]);
                }
                startC++;
            }
            
        }
        return ans[k-1];
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends