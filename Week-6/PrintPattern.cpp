//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void sol1(int N,vector<int>&ans){
        ans.push_back(N);
        if(N>0){
            sol1(N-5,ans);
        }
    }
    void sol2(int &last, vector<int>& ans, int a){
        last+=5;
        if(last!=a){
            ans.push_back(last);
            sol2(last,ans,a);
        }
    }
    vector<int> pattern(int N){
        // code here
        if(N<=0){
            return {N};
        }
        int a = N;
        vector<int> ans;
        sol1(N,ans);
        int last = ans[ans.size()-1];
        sol2(last,ans,a);
        ans.push_back(a);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends