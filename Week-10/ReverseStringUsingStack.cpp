//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
char* reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        for(int i=0;i<len;i++)
        {
            cout<<ch[i];
        }
        cout<<endl;
    }
        return 0;
}


// } Driver Code Ends


//return the address of the string
char* reverse(char *S, int len)
{
    //code here
    stack<char> temp;
    int i =0;
    while(i<len){
        temp.push(S[i]);
        i++;
    }
    char *ans=new char[len+1];
    i =0;
    while(!temp.empty()){
        ans[i]=temp.top();
        i++;
        temp.pop();
    }
    ans[len] = '/0';
    return ans;
}