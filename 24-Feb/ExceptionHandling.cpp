//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxValue(int A, int B){
        // code here
        try{
            if(B==0){
                throw B;
            }
        }
        catch(...){
            return -999999;
        }
        return max({(A+B), (A-B), (A*B), (A/B)});
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B;
        cin>>A>>B;
        
        Solution ob;
        int ans = ob.maxValue(A,B);
        if(ans == -999999)
            cout<<"inf\n";
        else
            cout<<ans<<"\n";
    }
    return 0;
}
// } Driver Code Ends