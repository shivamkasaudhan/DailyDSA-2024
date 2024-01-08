#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int findKthLargest(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    return (nums[nums.size() - k]);
}
int main() {
    vector<int> nums = {3,2,3,1,2,4,5,5,6};
    cout<<findKthLargest(nums, 3)<<endl;
    return 0;
}