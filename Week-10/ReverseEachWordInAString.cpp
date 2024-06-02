//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        stack<char>st;
        string ans ="";
        for(int i =0;i<s.size();i++){
            char c = s[i];
            if(c!='.'){
                st.push(c);
            }else if(c=='.'){
                while(!st.empty()){
                    ans+=st.top();
                    st.pop();
                }
                ans+='.';
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends