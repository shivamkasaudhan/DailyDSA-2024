//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        // Your code here
        if(arr[low]<=arr[high]){
            return arr[low];
        }
        int s= low;
        int e= high;
        while(s<=e){
            int mid = s+(e-s)/2;
            int next = (mid+1)%(high+1);
            int prev = (mid-1)%(high+1);
            if(arr[mid]<=arr[prev] && arr[mid] <= arr[next]){
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
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];	
		Solution obj;
		cout << obj.minNumber(a,0,n-1) << endl;
	}
	return 0;
}
// } Driver Code Ends