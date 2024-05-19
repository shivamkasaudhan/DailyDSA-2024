//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    bool canProvide(int mid,vector<int>&arr,int K){
        int sum =0;
        int person = 0;
        for(int i =0;i<arr.size();i++){
            sum +=arr[i];
            if(sum >=mid){
                person++;
                sum=0;
            }
        }
        return person >=K+1;
    }
    int maxSweetness(vector<int>& sweetness, int N, int K) {
    // Write your code here.
        int low =INT_MAX;
        int high = 0;
        int mid;
        for(int i =0;i<N;i++){
            low = min(low,sweetness[i]);
            high+=sweetness[i];
        }
        int ans =0;
        while(low<=high){
            mid = low+(high-low)/2;
            if(canProvide(mid,sweetness,K)){
                ans = mid;
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> sweetness(n);
        for (int i = 0; i < n; i++) {
            cin >> sweetness[i];
        }
          Solution ob;
          int res=ob.maxSweetness(sweetness, n, k);
        cout << res << endl;
    }
}
// } Driver Code Ends