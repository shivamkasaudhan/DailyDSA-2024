//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
  public:
    string stringFilter(string str) 
    { 
        //code here.
        string s="";
        int i=0;
        int n = str.size();
        while(i<n){
            if(str[i]=='b') {
                i++;
            }else if(str[i]=='a' && str[i+1]=='c'){
                i+=2;
            }else{
                s+=str[i];
                i++;
            }
            
        }
        return s;
    } 
};

//{ Driver Code Starts.

int main() 
{
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   		
   		Solution ob;
   		cout <<ob.stringFilter(s) << "\n";

   		
   	}

    return 0;
}
// } Driver Code Ends