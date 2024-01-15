class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        set<int> w, l;
        unordered_map<int, int> total;
        for(auto i : matches){
            w.insert(i[0]), l.insert(i[1]), total[i[1]]++;   
        }
        vector<int> v1, v2;
        for(auto i : w){
            if(total.find(i) == total.end()){
                v1.push_back(i);
            }
        }
        for(auto i : l){
            if(total[i] == 1){
                v2.push_back(i);
            }
        }
        return {v1, v2};
    }
};