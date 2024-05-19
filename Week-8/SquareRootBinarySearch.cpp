//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        long long int s =1;
        long long int e=x;
        long long int t=0;
        while(s<=e){
            long long int mid = s+(e-s)/2;
            if(mid*mid==x){
                return mid;
            }else if(mid*mid > x){
                e =mid -1;
            }else{
                t=mid;
                s= mid+1;
            }
        }
        return t;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends