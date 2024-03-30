class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mp;
        for(int i =0;i<arr1.size();i++){
            mp[arr1[i]]++;
        }
        vector<int> ans;
        for(int i=0;i<arr2.size();i++){
            for(int j = 1;j<=mp[arr2[i]];j++){
                ans.push_back(arr2[i]);
            }
            mp.erase(arr2[i]);

        }
        for(auto i:mp){
            for(int j  = 0;j<i.second;j++){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};