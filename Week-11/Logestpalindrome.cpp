class Solution {
public:
    int longestPalindrome(string s) {
        unordered_set<char> st;
        int length =0;
        for(auto c : s){
            if(st.find(c)!=st.end()){
                st.erase(c);
                length+=2;
            }else{
                st.insert(c);
            }
        }
        if(!st.empty()){
            length+=1;
        }
        return length;
        
    }
};