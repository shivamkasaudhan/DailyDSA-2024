//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends


bool valid(string s)
{
    // code here
    stack<char> st;
    for(int i =0;i<s.size();i++){
        char c = s[i];
        if(c=='(' || c=='{' || c=='['){
            st.push(c);
        }else {
            if(st.empty()){
                return false;
            }
            if(c == ')' && st.top()=='(' 
            || c=='}' && st.top()=='{' 
            || c==']' && st.top()=='['){
                st.pop();
            }else{
                return false;
            }
        }
    }
    return st.empty();
}