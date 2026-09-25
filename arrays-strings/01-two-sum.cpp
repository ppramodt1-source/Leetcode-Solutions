#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 15};
    int target = 9;

    int n = 4;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (arr[i] + arr[j] == target) {
                cout << "Indices: " << i << " " << j << endl;
            }

        }
    }

    return 0;
}
/*
Test Case 1:
Input: [2, 7, 11, 15], Target = 9
Expected Output: Indices: 0 1

Test Case 2:
Input: [3, 2, 4], Target = 6
Expected Output: Indices: 1 2
*/