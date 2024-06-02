class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(int i =0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                if(!st.empty() && st.top()==s[i]-32){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }else if(s[i]>='A' && s[i]<='Z'){
                if(!st.empty() && st.top()==s[i]+32){
                    st.pop();
                }else{
                    st.push(s[i]);
                }

            }
        }
        string ans = "";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};