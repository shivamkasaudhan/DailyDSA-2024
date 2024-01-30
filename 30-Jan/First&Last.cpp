//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int> ans;
        int s= 0;
        int e = n-1;
        while(s<n){
            if(arr[s] == x){
                ans.push_back(s);
                break;
            }else{
                s++;
            }
        }
        while(e>0){
            if(arr[e] == x){
                ans.push_back(e);
                break;
            }else{
                e--;
            }
        }
        if(ans.size() == 0){
            return {-1,-1};
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends