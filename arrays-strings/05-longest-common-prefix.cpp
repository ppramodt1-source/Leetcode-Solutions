#include <iostream>
#include <string>
using namespace std;

int main() {

    // Test Case 1
    string words[] = {"dog", "racecar", "car"};
    int n = 3;

    int minLength = words[0].length();

    for (int i = 1; i < n; i++) {
        if (words[i].length() < minLength) {
            minLength = words[i].length();
        }
    }

    string prefix = "";

    for (int i = 0; i < minLength; i++) {

        bool same = true;

        for (int j = 1; j < n; j++) {
            if (words[0][i] != words[j][i]) {
                same = false;
                break;
            }
        }

        if (same) {
            prefix += words[0][i];
        } else {
            break;
        }
    }

    cout << "Longest Common Prefix: " << prefix;

    return 0;
}

/*
Test Case 1:
Input: ["flower", "flow", "flight"]
Expected Output: Longest Common Prefix: fl

Test Case 2:
Input: ["dog", "racecar", "car"]
Expected Output: Longest Common Prefix:
*/