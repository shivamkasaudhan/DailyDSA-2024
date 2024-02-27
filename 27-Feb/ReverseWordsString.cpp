//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        vector<string> words;
        int i = 0;
        int n = S.size();
        while(i<n){
            string temp = "";
            while(i<n && S[i]!='.'){
                temp +=S[i];
                i++;
            }
            words.push_back(temp);
            i++;
        }
        string ans = "";
        for(int j = words.size()-1; j>=0; j--){
            ans+=words[j];
            if(j>0){
                ans+=".";
            }
        }
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends