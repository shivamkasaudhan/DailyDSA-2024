class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s = 0;
        int e = nums.size()-1;
        while(s<=e){
            if(nums[s]+nums[e]==0){
                return nums[e];
            }if(abs(nums[s]) > abs(nums[e])){
                s++;
            }else{
                e--;
            }
        }
        return -1;
    }
};