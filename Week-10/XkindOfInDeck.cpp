class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> m;
        for(auto it : deck){
            m[it]++;
        }
        int num =0;

        for(auto it : m){
            num = __gcd(it.second,num);
        }
        return num>1;
        
    }
};