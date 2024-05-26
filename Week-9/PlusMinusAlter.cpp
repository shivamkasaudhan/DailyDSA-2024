//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    queue<int> plus;
        queue<int> minus;
        for (int i = 0; i < n; i++) {
            if (arr[i] >= 0) {
            plus.push(arr[i]);
            } else {
                minus.push(arr[i]);
            }
        }
        int i = 0;
        while (!plus.empty() && !minus.empty()) {
            arr[i] = plus.front();
            plus.pop();
            i++;
            arr[i] = minus.front();
            minus.pop();
            i++;
        }
        while (!plus.empty()) {
            arr[i] = plus.front();
            plus.pop();
            i++;
        }
        while (!minus.empty()) {
            arr[i] = minus.front();
            minus.pop();
            i++;
        }	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends