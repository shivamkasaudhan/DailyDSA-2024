//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function for finding maximum and value pair
	int maxAND (int arr[], int n)
	{
	    // Complete the function
	    if(n==0) return 0;
	    sort(arr,arr+n);
	    int ans=0;
	    for(int i=n-1;i>=1;i--){
	        ans = max(ans,arr[i]&arr[i-1]);
	        
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
 
// Driver function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        Solution ob;
        cout <<  ob.maxAND(arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends