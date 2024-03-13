//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }
 
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    void SortedDuplicates(int n, vector<int> &arr) {
        // code here
        unordered_map<int,int> freq;
        vector<int> ans;
        for(int i = 0; i < n; i++){
            freq[arr[i]]++;
        }
        for(auto it : freq){
            if(it.second >1){
                ans.push_back(it.first);
            }
        }
        if(ans.size()==0){
            cout<<-1;
        }else{
            sort(ans.begin(),ans.end());
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
        }
        
        cout<<endl;
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n; 
        scanf("%d",&n);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        
        obj.SortedDuplicates(n, arr);
        
    }
}

// } Driver Code Ends