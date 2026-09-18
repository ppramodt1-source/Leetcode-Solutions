#include <iostream>
using namespace std;

int main() {

    // Test Case 1
    int nums[] = {0, 0, 1};
    int n = 3;

    int position = 0;

    for (int i = 0; i < n; i++) {

        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < n) {
        nums[position] = 0;
        position++;
    }

    cout << "Array after moving zeroes: ";

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}

/*
Test Case 1:
Input: [0, 1, 0, 3, 12]
Expected Output: [1, 3, 12, 0, 0]

Test Case 2:
Input: [0, 0, 1]
Expected Output: [1, 0, 0]
*/