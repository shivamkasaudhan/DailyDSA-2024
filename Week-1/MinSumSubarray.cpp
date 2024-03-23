//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  int smallestSumSubarray(vector<int>& a){
      //Code here
        long long max_so_far = INT_MIN;
        long long max_end_here = 0;
        for(int i=0;i<a.size();i++){
            a[i]= (-1)*a[i];
        }
        for(int i=0;i<a.size();i++){
            max_end_here += a[i];
            if(max_so_far<max_end_here){
                max_so_far = max_end_here;
            }
            if(max_end_here<0){
                max_end_here = 0;
            }
        }
        int ans = (-1)*max_so_far;
        return ans;
  }
};


//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        Solution ob;
        
        int ans = ob.smallestSumSubarray(a);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends