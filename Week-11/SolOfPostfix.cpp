//{ Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    bool isOperator(char c){
        return c=='+' || c=='-' ||c=='/' ||c=='*';
    }
    int operation(int n,int c,int m){
        int ans=0;
        switch(c){
        case '+':
            ans =n+m;
            break;
        case '-':
            ans = n-m;
            break;
        case '*':
            ans = n*m;
            break;
        case '/':
            ans = n/m;
            break;
        }
        return ans;
    }
    int evaluatePostfix(string S)
    {
        // Your code here
        stack<int>st;
        for(auto c : S){
            if(isOperator(c)){
                int num1 = st.top();
                st.pop();
                int num2 =st.top();
                st.pop();
                st.push(operation(num2,c,num1));
                
            }else if(isdigit(c)){
                st.push(c-'0');
            }
        }
        return st.top();
    }
};

//{ Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends