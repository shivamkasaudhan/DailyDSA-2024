#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int minOperations(vector<int> &nums)
{
    unordered_map<int, int> freq;
    for (int num : nums)
    {
        freq[num]++;
    }
    int ans = 0;
    for (auto &i : freq)
    {
        if (i.second == 1)
            return -1;
        ans += i.second / 3;
        if (i.second % 3)
            ans++;
    }
    return ans;
}
#include <iostream>
using namespace std;
int main(){
    vector<int> nums = {2,3,3,2,2,4,2,3,4};
    cout<<minOperations(nums);
    return 0;
}