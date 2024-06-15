//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool contains(int n){
        while(n>0){
            if(((n%10)^4) == 0){
                return true;
            }
            n/=10;
        }
        return false;
    }
    int countNumberswith4(int n) {
        // code here
        if(n<1){
            return false;
        }
        if(contains(n)){
            return 1+countNumberswith4(n-1);
        }else{
            return countNumberswith4(n-1);
        }
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.countNumberswith4(n);

        cout << res << endl;
    }
}

// } Driver Code Ends