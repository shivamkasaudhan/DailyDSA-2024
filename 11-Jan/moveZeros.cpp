#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void moveZeroes(vector<int> &nums)
{
    int i = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[j], nums[i]);
            i++;
        }
    }
}
int main(){
    vector<int> nums = {13,25,45,0,8,0,8,3,0,9,0,1,2,0,7,8,0,78,21,0};
    moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}