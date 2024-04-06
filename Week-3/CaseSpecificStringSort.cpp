//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        vector<int>upper;
        vector<int>lower;
        for(int i=0;i<n;i++){
            if(str[i]>='a'&&str[i]<='z'){
                lower.push_back(str[i]);
            }else{
                upper.push_back(str[i]);
            }
        }
        sort(upper.begin(),upper.end());
        sort(lower.begin(),lower.end());
        string ans="";
        int j =0;
        int k =0;
        for(int i=0;i<n;i++){
            if(str[i]>='a'&&str[i]<='z'){
                ans+=lower[j++];
            }else{
                ans+=upper[k++];
            }
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
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends