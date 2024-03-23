//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    vector<int> Series(int n) {
        // Code here
        int mod=1e9+7;
        vector<int>ans;
        int a=0;
        int b=1;
        ans.push_back(a);
        ans.push_back(b);
        int s=0;
        while(n!=1){
          s=(a+b)%mod;
          ans.push_back(s);
          a=b;
          b=s;
          n--;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends