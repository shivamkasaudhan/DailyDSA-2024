//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        int s=0;
        int e=n-1;
        if(arr[s]<=arr[e]){
            return arr[s];
        }
        
        while(s<=e){
            int mid=s+(e-s)/2;
            int next = (mid+1)%n;
            int prev = (mid-1)%n;
            if(arr[mid] <= arr[next] && arr[mid]<=arr[prev]){
                return arr[mid];
            }else if(arr[mid]<arr[e]){
                e= mid-1;
            }else{
                s=mid+1;
            }
        }
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends