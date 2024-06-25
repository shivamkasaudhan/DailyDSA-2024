//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {

        // Code here
        string f1,f2;
        size_t comma = str.find(",");
        f1 = str.substr(0,comma);
        f2 = str.substr(comma+2);
        int a, b, c, d;
        char slash; // to ignore the '/' character
        
        stringstream ss1(f1);
        ss1 >> a >> slash >> b;
        
        stringstream ss2(f2);
        ss2 >> c >> slash >> d;
        
        // Calculate cross products
        int left = a * d;
        int right = b * c;
        
        // Compare the cross products
        if (left > right) {
            return f1;
        } else if (left < right) {
            return f2;
        } else {
            return "equal";
        }
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends