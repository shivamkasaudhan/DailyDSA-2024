#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char>st;
    for(int i =0;i<s.length();i++){
        char c = s[i];
        if(c=='(' || c=='+' || c=='-' || c=='*' || c=='/'){
            st.push(c);
        }else{
            if(c==')'){
                bool redundant = true;
                while(st.top() != '('){
                    char t = st.top();
                    if(t=='+' || t=='-'|| t=='*' || t=='/'){
                        redundant = false;
                    }
                    st.pop();
                }
                if(redundant==true){
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}
