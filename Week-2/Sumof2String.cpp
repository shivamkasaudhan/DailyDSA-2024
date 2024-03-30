//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    
    string findSum(string X, string Y) {
        // Your code goes here
        int carry = 0;
        string sum = "";

        int i = X.size() - 1;
        int j = Y.size() - 1;

        while (i >= 0 || j >= 0 || carry > 0) {
            int digitX = (i >= 0) ? (X[i] - '0') : 0;
            
           int digitY = (j >= 0) ? (Y[j] - '0') : 0;
           int currentSum = digitX + digitY + carry;
           
          carry = currentSum / 10;
          int digit = currentSum % 10;
          
          sum.push_back(digit + '0');
          
          i--;
          j--;
        }

        reverse(sum.begin(), sum.end());
        sum.erase(0, min(sum.find_first_not_of('0'), sum.size() - 1));

        return sum;
        
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}
// } Driver Code Ends