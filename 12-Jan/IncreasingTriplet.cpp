#include <iostream>
#include <vector>
using namespace std;
bool increasingTriplet(vector<int> &nums)
{
    if (nums.size() < 3)
        return false;
    int i = 1e9, j = 1e9;
    for (int num : nums)
    {
        if (num <= i)
        {
            i = num;
        }
        else if (num <= j)
        {
            j = num;
        }
        else
        {
            return true;
        }
    }
    return false;
}
int main() {
    vector<int> nums = {1,0,3,5,5,6,7,8,9};
    cout<<increasingTriplet(nums)<<endl;
    return 0;
}