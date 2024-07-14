#include <climits>
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum =0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double avg = (sum/k);
        int i = k;
        while(i<nums.size()){
            sum = sum - nums[i-k];
            sum+=nums[i++];
            double temp = (sum/k);
            avg = max(avg,temp);
        }
        return avg;
        
    }
};