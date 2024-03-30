//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string S){
        // code here
        stack<int> st;
        st.push(-1);
        int maxLen =0;
        
        for(int i=0;i<S.size();i++){
            if(S[i]=='('){
                st.push(i);
            }else{
                st.pop();
                if(!st.empty()){
                    maxLen = max(maxLen,i-st.top());
                }else{
                    st.push(i);
                }
            }
        }
        return maxLen;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends