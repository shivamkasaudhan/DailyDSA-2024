#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int minimumSum(vector<int> &nums)
{
    int ans = 1e9;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                if (i < j && j < k && nums[i] < nums[j] && nums[k] < nums[j])
                {
                    int sum = nums[i] + nums[j] + nums[k];
                    ans = min(ans, sum);
                }
            }
        }
    }
    if (ans == 1e9)
    {
        return -1;
    }
    else
    {
        return ans;
    }
}
int main(){
    vector<int> nums = {5,4,8,7,10,2};
    cout<<minimumSum(nums)<<endl;
    return 0;
}
