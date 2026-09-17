#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s = "hello";

    int i = 0;
    int j = s.length() - 1;

    while (i < j) {
        swap(s[i], s[j]);

        i++;
        j--;
    }

    cout << s;

    return 0;
}
/*
Test Case 1:
Input: hello
Expected Output: olleh

Test Case 2:
Input: a
Expected Output: a
*/