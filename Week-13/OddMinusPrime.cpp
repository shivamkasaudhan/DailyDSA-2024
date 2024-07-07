//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    
    vector<bool> seive(int n){
        vector<bool>is_Prime(n+1,true);
        is_Prime[0] = is_Prime[1]=false;
        for(int i =2;i*i<=n;i++){
            if(is_Prime[i]){
                for(int j = i*i;j<=n;j+=i){
                    is_Prime[j]=false;
                }
            }
        }
        return is_Prime;
    }

    long long maximumSum(int n, int k) {
        vector<bool>is_Prime=seive(n);
        long long sum = 0;
        int count = 0;

        for (int i = n; i > 0; i--) {
            if (!is_Prime[i] && i % 2 != 0) {
                sum += i;
                count++;
                if (count == k) break;
            }
        }

        // If we haven't found k non-prime odd numbers, return -1
        if (count < k) return -1;
        return sum;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int k;
        scanf("%d", &k);

        Solution obj;
        long long res = obj.maximumSum(n, k);

        cout << res << endl;
    }
}

// } Driver Code Ends