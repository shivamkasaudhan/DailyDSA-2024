//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        int n =str1.size();
        int m = str2.size();
        string left;
        string right;
        if(n!=m){
            return false;
        }
        if(n==1 && m==1 && str1!=str2){
            return false;
        }else{
            left = str1.substr(2)+str1.substr(0,2);
            if(left == str2){
                return true;
            }
            right = str1.substr(n-2)+str1.substr(0,n-2);
            if(right == str2){
                return true;
            }
        }
        return false;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends