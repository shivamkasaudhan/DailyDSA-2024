//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
	// Your code here
	vector<string> ans;
	for(int i =1;i<=N;i++){
	    int rem =0;
	    int j =i;
	    string st = "";
	    while(j){
	        rem= j%2;
	        j = j/2;
	        st+= to_string(rem);
	    }
	    reverse(st.begin(),st.end());
	    ans.push_back(st);
	}
	return ans;
	
}


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends