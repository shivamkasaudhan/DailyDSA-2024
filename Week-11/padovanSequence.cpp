//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    int padovanSequence(int n)
    {
       //code here
       if(n==0 || n==1 || n==2){
           return 1;
       }
       int arr[3] = {1,1,1};
       int val;
       int count =0;
       bool flag = true;
       for(int i=3;i<=n;i++){
           long d;
           if(count==0){
               d = arr[0]+arr[1];
           }else if(count==1){
               d= arr[1]+arr[2];
           }else{
               d = arr[0]+arr[2];
           }
           d=d%1000000007;
           val = d;
           arr[count] = d;
           flag++;
           count++;
           if(count == 3){
               count = 0;
           }
       }
       return val;
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
    	Solution ob;
    	cout<<ob.padovanSequence(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends