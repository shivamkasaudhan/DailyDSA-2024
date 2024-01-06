class Solution {
public:
    int maxArea(vector<int>& h) {
        int maxwater=0;
        int s=0;
        int e= h.size()-1;
        while(s<e){
            int water=min(h[s],h[e])*(e-s);
            maxwater= max(maxwater,water);
            if(h[s]<h[e]){
                s++;
            }else{
                e--;
            }
        }
        return maxwater;
    }
};