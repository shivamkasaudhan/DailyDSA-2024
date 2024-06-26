//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void solve(string s, vector<string>& ans, int index){
	        //base case
	        if(index>=s.size()){
	            ans.push_back(s);
	            return ;
	        }
	        
	        for(int i =index;i<s.size();i++){
	            swap(s[index],s[i]);
	            solve(s,ans,index+1);
	            //back track
	            swap(s[index],s[i]);
	            
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> ans;
		    int index =0;
		    solve(S,ans,index);
		    sort(ans.begin(), ans.end());
		    ans.erase(unique(ans.begin(),ans.end()),ans.end());
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends