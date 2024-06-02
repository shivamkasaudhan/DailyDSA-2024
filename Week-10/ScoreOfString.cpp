class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0;
        int i = 0;
        int j = 1;
        while (j < s.size()) {
            ans += abs(s[i++] - s[j++]);
        }
        return ans;
    }
};