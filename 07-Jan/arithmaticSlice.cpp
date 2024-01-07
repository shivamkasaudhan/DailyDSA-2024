//446. Arithmetic Slices II - Subsequence
// tc O(n^2)
//sc O(n^2)
#define ll long long int
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        vector<unordered_map<ll,int>> dp(n);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                ll diff = (ll) nums[i] - nums[j];

                dp[i][diff] += dp[j][diff] + 1;
                ans += dp[j][diff];
            }
        }
        return ans;
    }
};