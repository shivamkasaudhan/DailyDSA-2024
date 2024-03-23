//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void solve(string s,vector<string>& ans,string output,int index){
	        if(index>=s.size()){
	            ans.push_back(output);
	            return ;
	        }
	        
	        for(int i = index;i<s.size();i++){
	            swap(s[index],s[i]); 
	            
	            output.push_back(s[index]);
	            solve(s,ans,output,index+1);
	            output.pop_back();
	            
	            swap(s[index],s[i]); //backtrack
	        }
	        
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string> ans;
		    string output;
		    int index=0;
		    solve(S,ans,output,index);
		    sort(ans.begin(),ans.end());
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