//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int ans = 0;
        int i = 0;
        if(s[i] == '-') i = 1;
        while(s[i] == '0') i++;
        for(;i<s.size();i++){
            int temp = s[i]-'0';
            if(temp >=0 && temp < 10){
                ans = (ans*10)+temp;
            }else{
                return -1;
            }
        }
        if(s[0] == '-') return -ans;
            else{
                return ans;
            }
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends