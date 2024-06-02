class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i =0,j=0,m=t.size();
        while(j<m){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
        return i==s.size();
        
    }
};