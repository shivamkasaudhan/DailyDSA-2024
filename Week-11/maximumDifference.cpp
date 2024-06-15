//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr, int n) {
        // Your code here
        stack<int> s;
        stack<int> s1;
        
        vector<int>v1(n,0);
        vector<int>v2(n,0);
        int ans = 0;
        for(int i =0;i<n;i++){
            while(!s.empty() && s.top()>=arr[i]){
                s.pop();
            }
            if(!s.empty()){
                v1[i]= s.top();
            }else{
                v1[i] =0;
            }
            s.push(arr[i]);
        }
        for(int i=n-1;i>=0;--i){
            while(!s1.empty() && s1.top()>=arr[i]){
                s1.pop();
            }
            if(!s1.empty()){
                v2[i]=s1.top();
            }else{
                v2[i] =0;
            }
            s1.push(arr[i]);
        }
        // reverse(v2.begin(),v2.end());
        for(int i =0;i<n;i++){
            ans = max(ans, abs(v1[i]-v2[i]));
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
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        Solution ob;
        cout << ob.findMaxDiff(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends