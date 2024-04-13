//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str)
    {
        //code here.
        string s="";
        int sum=0;
        for(int i=0;i<str.size();i++){
            if(str[i]>='0'&&str[i]<='9'){
                sum +=str[i]-'0';
            }else{
                s+=str[i];
            }
        }
        sort(s.begin(),s.end());
        string num="";
        while(sum>0){
            int temp = sum%10;
            char ch=('0'+temp);
            num+=ch;
            sum/=10;
        }
        reverse(num.begin(),num.end());
        s+=num;
        return s;
        
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
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}


// } Driver Code Ends