//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // code here
            int num =0;
            int dotCount=0;
            if(s.size()>15){
                return 0;
            }
            for(int i =0;i<s.size();i++){
                if(isdigit(s[i])){
                    num = num *10 + (s[i]-'0');
                    if(num>255 ){
                        return 0;
                    }
                    if(num ==0 && s[i+1]=='0'){
                        return 0;
                    }
                    if(num !=0 && s[i-1]=='0'){
                        return 0;
                    }
                }else if(s[i]=='.'){
                    dotCount++;
                    if(dotCount>3){
                        return 0;
                    }
                    if(s[i+1]=='.'){
                        return false;
                    }
                    num =0;
                }else{
                    return 0;
                }
                
            }
            if(dotCount<3){
                return 0;
            }
            return 1;
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends