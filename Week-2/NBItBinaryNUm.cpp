//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    void solve(vector<string> &ans, int zero,int one,string ele,int n){
        if(ele.length()==n){
            ans.push_back(ele);
            return ;
        }
        if(zero<one){
            solve(ans,zero+1,one,ele+'0',n);
        }
        solve(ans,zero,one+1,ele+'1',n);
    }
	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	    vector<string> ans;
	    int zero = 0;
	    int one =1;
	    string ele = "1";
	    solve(ans,zero,one,ele,n);
	    sort(ans.begin(),ans.end());
	    reverse(ans.begin(),ans.end());
	    return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends