class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n = nums.size();
        if(n%k!=0) return false;
        map<int,int> mp;
        for(auto it : nums){
            mp[it]++;
        }
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            int start = it->first;
            int count = it->second;
            if (count > 0) {
                for (int i = 0; i < k; i++) {
                    if (mp[start + i] < count) {
                        return false;
                    }
                    mp[start + i] -= count;
                }
            }
        }
        return true;
    }
};