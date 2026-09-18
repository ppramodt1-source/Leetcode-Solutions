#include <iostream>
using namespace std;

int main() {

    // Test Case 1
    int nums[] = {1, 2, 3, 4, 5};
    int n = 5;
    int target = 6;

    int left = 0;
    int right = n - 1;
    int result = -1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid;
            break;
        }
        else if (nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    cout << "Index: " << result;

    return 0;
}

/*
Test Case 1:
Input: nums = [1, 2, 3, 4, 5], target = 4
Expected Output: Index: 3

Test Case 2:
Input: nums = [1, 2, 3, 4, 5], target = 6
Expected Output: Index: -1
*/