//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long x) {
        // code here
        string s ="";
        long long ans = 0;
        for(int i=0;i<=31;i++){
            char ch = ((x>>i)&1)+'0';
            s+=ch;
        }
        int j=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='1'){
                ans+=(1LL<<j);
            }
            j++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends