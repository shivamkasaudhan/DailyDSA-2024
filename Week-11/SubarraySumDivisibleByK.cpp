class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>sum(k,0);
        sum[0]=1;
        int cnt =0;
        int currSum = 0;
        for(int i=0;i<n;i++){
            currSum =(currSum+nums[i]%k+k)%k;
            cnt+=sum[currSum];
            sum[currSum]++;
        }
        return cnt;
    }
};