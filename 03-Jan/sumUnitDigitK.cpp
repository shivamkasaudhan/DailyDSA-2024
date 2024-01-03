#include <iostream>

int minSetSizeWithUnitDigitK(int num, int k) {
    if (num < k) {
        // If num is less than k, no solution exists.
        return -1;
    }

    // If k is 0, then the set can only contain a single integer (num itself).
    if (k == 0) {
        return 1;
    }

    // Calculate the minimum size of the set.
    int setSize = (num + 9) / 10;
    
    // Check if there is a valid set with the specified unit digit.
    if ((setSize * 10 - k) <= num && num <= (setSize * 10 - 1)) {
        return setSize;
    } else {
        return -1;
    }
}


int main() {
    // Exercise-1
    int num;
    int k;
    std::cin>>num>>k;
    std::cout  << minSetSizeWithUnitDigitK(num, k) << std::endl;
    return 0;
}
