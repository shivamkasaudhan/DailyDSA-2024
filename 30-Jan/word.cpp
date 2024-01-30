#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    int upper = 0, lower = 0;

    for (int i = 0; i < n.size(); i++) {
        if (n[i] >= 'A' && n[i] <= 'Z') {
            upper++;
        } else {
            lower++;
        }
    }

    if (upper == lower || lower > upper) {
        for (int i = 0; i < n.size(); i++) {
            if (n[i] >= 'A' && n[i] <= 'Z') {
                n[i] += 32;
            }
        }
    } else if (lower < upper) {
        for (int i = 0; i < n.size(); i++) {
            if (n[i] >= 'a' && n[i] <= 'z') {
                n[i] -= 32;
            }
        }
    }

    cout << n << endl;

    return 0;
}
