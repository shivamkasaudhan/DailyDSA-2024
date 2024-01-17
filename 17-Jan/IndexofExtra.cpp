//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        // add code here.
        int index = -1;
        int s = 0;
        int e = n - 1;
        while(s <= e)
        {
            int mid = s + (e - s)/2;
            if(a[mid] == b[mid])
            {
                s = mid + 1;
            }else if(a[mid] == b[mid-1])
            {
                index = mid;
                e = mid - 1;
            }else{
                return mid;
            }
        }
        return index;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        Solution obj;
        cout << obj.findExtra(a, b, n) << endl;
    }
}
// } Driver Code Ends