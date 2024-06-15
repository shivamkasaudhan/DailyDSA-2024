//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string binaryNextNumber(string s) {
        // code here.
        for(int i=s.length(); i>=0;i--){
            if(s[i]=='0'){
                s[i]='1';
                for(int j=0;j<s.length();j++){
                    if(s[j]=='1'){
                        return s.substr(j);
                    }
                }
            }else{
                s[i]='0';
            }
        }
        return ('1'+s);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends