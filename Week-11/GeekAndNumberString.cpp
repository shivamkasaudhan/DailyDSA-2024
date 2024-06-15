//{ Driver Code Starts
//Initial template for C++
 
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int minLength(string s, int n) {
        // code here
        stack<int>st;
        for(int i =0;i<n;i++){
            char c = s[i];
            if(!st.empty() && (abs(st.top()-c )== 1 || abs(st.top()-c )== 9)){
                if(!((st.top()=='5' && c=='4') || (st.top() =='4' && c=='5')) && 
                !((st.top()=='2' && c=='3') || (st.top() =='3' && c=='2')) && 
                !((st.top()=='6' && c=='7') || (st.top() =='7' && c=='6')) && 
                !((st.top()=='9' && c=='8') || (st.top() =='8' && c=='9')) && 
                !((st.top()=='0' && c=='1') || (st.top() =='1' && c=='0'))){
                    st.pop();
                    continue;
                }
            }
            st.push(c);
        }
        
        return st.size();
    } 
};


//{ Driver Code Starts.

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        Solution obj;
        cout << obj.minLength(s, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends