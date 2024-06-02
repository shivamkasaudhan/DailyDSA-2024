//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) {
        // code here
        vector<int> m(26,0);
        for(auto &ch : s){
            m[ch-'a']++;
        }
        int ans =0;
        for(int i=0;i<26;i++){
            if(i&1 && m[i] && (m[i]+1)&1){
                ans++;
            }
            if((i+1)&1 && m[i] && m[i]&1){
                ans++;
            }
        }
        return ans&1 ? "ODD" : "EVEN";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends