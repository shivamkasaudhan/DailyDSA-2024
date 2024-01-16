class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum =0;
        vector<int> ele;
        ele.push_back(0);
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            ele.push_back(sum);
        }
        return *max_element(ele.begin(),ele.end());
        
    }
};