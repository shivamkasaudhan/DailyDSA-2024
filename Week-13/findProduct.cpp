#include<iostream>
using namespace std;

int main() {
    int n;
    long long p = 1;
    const int MOD = 1000000007; // Define the modulo value
    
    cin >> n;
    int a[n];

    // Read the array elements
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Calculate the product of the elements modulo MOD
    for(int i = 0; i < n; i++) {
        p = (p * a[i]) % MOD;
    }

    cout << p << endl;
    return 0;
}
