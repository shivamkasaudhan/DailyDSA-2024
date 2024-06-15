//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        // code here
        vector<int>ans;
        if(arr[N-1]<9){
            arr[N-1]++;
            return arr;
        }else{
            int i = N-1;
            int digit = 0;
            int carry = 1;
            while(i>=0){
                int num = arr[i]+carry;
                digit = num%10;
                carry = num/10;
                ans.push_back(digit);
                i--;
            }
            while(carry){
                digit = carry%10;
                carry = carry/10;
                ans.push_back(digit);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends