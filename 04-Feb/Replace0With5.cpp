//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    vector<int> nums;
    while(n>0){
        int rem = n%10;
        n/=10;
        nums.push_back(rem);
    }
    int ans = 0;
    for(int i = nums.size()-1;i >=0;i--){
        if(nums[i]==0){
            nums[i]+=5;
        }
        ans = ans*10+nums[i];
    }
    return ans;
}