//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	// Your code here
    	vector<int>v(32);
    	unsigned int ans =0;
    	int j =31;
    	while(n>0 && j>=0){
    	    v[j]=(n%2);
    	    j--;
    	    n=n/2;
    	}
    	unsigned int k =0;
    	for(int i =0;i<31;i++){
    	    swap(v[i],v[i+1]);
    	    i++;
    	}
    	reverse(v.begin(),v.end());
    	for(int i =0;i<v.size();i++){
    	    if(v[i]==1){
    	        ans+=pow(2,i)*v[i];
    	    }
    	}
    	return ans;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		Solution ob;
		//calling swapBits() method
		cout << ob.swapBits(n) << endl;
	}
	return 0;
}
// } Driver Code Ends