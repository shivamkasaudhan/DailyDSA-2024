//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void reArrange(int arr[], int N) {
        // code here
        vector<int> even;
        vector<int> odd;
        for(int i=0;i<N;i++){
            if(arr[i]%2==0){
                even.push_back(arr[i]);
            }else{
                odd.push_back(arr[i]);
            }
        }
        int ans[N]={0};
        int m=even.size()-1;
        int n = odd.size()-1;
        int i =0;
        int j =0;
        int k =0;
        while(i<=m && j<=n){
            ans[k++]=even[i++];
            ans[k++]=odd[j++];
        }
       for(int i =0;i<N;i++){
           arr[i]=ans[i];
       }
    }
};

//{ Driver Code Starts.

int check(int arr[], int n)
{
    int flag = 1;
    int c=0, d=0;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            if(arr[i]%2)
            {
                flag = 0;
                break;
            }
            else
                c++;
        }
        else
        {
            if(arr[i]%2==0)
            {
                flag = 0;
                break;
            }
            else
                d++;
        }
    }
    if(c!=d)
        flag = 0;
        
    return flag;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        ob.reArrange(arr,N);
        
        cout<<check(arr,N)<<endl;
    }
    return 0;
}
// } Driver Code Ends