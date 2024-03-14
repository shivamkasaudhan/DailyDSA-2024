//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
{
    stack<char> ans;
    for(char ch : x) {
        if(ch == '(' || ch == '{' || ch == '[') {
            ans.push(ch);
        } else {
            if(ans.empty()) {
                return false;
            } else if((ans.top() == '(' && ch == ')') || (ans.top() == '{' && ch == '}') || (ans.top() == '[' && ch == ']')) {
                ans.pop();
            } else {
                return false; 
            }
        }
    }
    return ans.empty();
}

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends