//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int maxSortedAdjacentDiff(int* arr, int n) {
	    // code here
	    if(n<2){
	        return 0;
	    }
	    sort(arr,arr+n);
	    int ans=0;
	    for(int i=1;i<n;i++){
	        ans = max(abs(arr[i-1] -arr[i]),ans);
	    }
	    return ans;
	}
};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxSortedAdjacentDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends