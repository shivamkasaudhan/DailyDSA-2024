//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int c=-1;
        int b=-1;
        int min_distance = INT_MAX;
        
        for (int i = 0; i < n; i++) {
            if (a[i] == x) {
                c = i;
            }
            if (a[i] == y) {
                b = i;
            }
            if (c != -1 && b != -1) {
                min_distance = min(min_distance, abs(c - b));
            }
        }
        
        if (c == -1 || b == -1) {
            return -1;
        }
        return min_distance;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends