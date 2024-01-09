#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    vector<bool> ans;
    int maximum = *max_element(candies.begin(), candies.end());
    for (int i = 0; i < candies.size(); i++)
    {
        ans.push_back(candies[i] + extraCandies >= maximum);
    }
    return ans;
}
int main() {
    vector<int> nums = {4,5,10,8,9,4,5};
    vector<bool> ans = kidsWithCandies(nums,5);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    } 
    cout<<endl;
    return 0;
}