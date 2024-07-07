class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size()<3){
            return false;
        }
        int i =0;
        int j=1;
        int k=2;
        while(k<arr.size()){
            if(arr[i]%2!=0 && arr[j]%2!=0 && arr[k]%2!=0){
                return true;
            }
            i++;
            j++;
            k++;
        }
        return false;
        
    }
};