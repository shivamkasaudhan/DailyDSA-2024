//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    bool isChar(char ch){
        if(ch>= 'a' && ch<='z' || ch>='A' && ch<='Z'){
            return true;
        }
        return false;
    }
    string reverse(string str)
    { 
        //code here.
        int s= 0;
        int e=str.size()-1;
        while(s<=e){
            if(isChar(str[s]) && isChar(str[e])){
                swap(str[s],str[e]);
                s++;
                e--;
            }else if(!isChar(str[s])){
                s++;
            }else if(!isChar(str[e])){
                e--;
            }
        }
        return str;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.reverse(s) << endl;
    }
return 0;
}


// } Driver Code Ends