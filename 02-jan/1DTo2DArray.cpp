// 2610. Convert an Array Into a 2D Array With Conditions
// tc O(n)
// sc
// code
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<int>> findMatrix(vector<int> &nums)
{
    vector<vector<int>> ans;
    unordered_map<int, int> freq;
    for (auto i : nums)
    {
        freq[i]++;
        if (ans.size() < freq[i])
        {
            ans.push_back({});
        }
        ans[freq[i] - 1].push_back(i);
    }
    return ans;
}
int main(){
    vector<int> nums = {1,2,3,4};
    vector<vector<int>> result = findMatrix(nums);
    for (const auto &row : result)
    {
        for (int num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}