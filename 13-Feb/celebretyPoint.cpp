#include <iostream>
#include <vector>
using namespace std;

int celebrity(vector<vector<int>> &M, int n) {
    // Iterate through each person
    for (int i = 0; i < n; i++) {
        // Assume the current person is a potential celebrity
        bool is_celebrity = true;

        // Check if the current person knows anyone or if anyone doesn't know the current person
        for (int j = 0; j < n; j++) {
            if (i != j && (M[i][j] == 1 || M[j][i] == 0)) {
                is_celebrity = false;
                break;
            }
        }

        // If the current person is still assumed to be a celebrity
        if (is_celebrity) {
            // Check if this person is known by everyone
            for (int j = 0; j < n; j++) {
                if (i != j && M[j][i] == 0) {
                    is_celebrity = false;
                    break;
                }
            }

            // If this person is known by everyone, then return its index
            if (is_celebrity) {
                return i;
            }
        }
    }

    // No celebrity found
    return -1;
}

int main() {
    vector<vector<int>> a = {{0, 0, 1}, {1, 1, 0}, {0, 0, 0}};
    cout << celebrity(a, 3) << endl;
    return 0;
}
