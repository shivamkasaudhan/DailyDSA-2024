//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        int countWords(string list[], int n)
        {
           //code here.
           unordered_map<string,int> freq;
           for(int i = 0; i < n; i++){
               freq[list[i]]++;
           }
           int count = 0;
           for(auto it : freq){
               if(it.second == 2){
                   count++;
                   
               }
           }
           return count;
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
        string list[n];
        for(int i=0;i<n;i++)
            cin>>list[i];
        Solution ob;    
        cout <<ob.countWords(list, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends