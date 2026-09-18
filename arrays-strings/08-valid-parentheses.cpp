#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {

    // Test Case 1
    string s = "([)]";

    stack<char> st;

    for (char c : s) {

        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        }
        else {

            if (st.empty()) {
                cout << "false";
                return 0;
            }

            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{')) {

                cout << "false";
                return 0;
            }
        }
    }

    if (st.empty()) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;
}

/*
Test Case 1:
Input: "()[]{}"
Expected Output: true

Test Case 2:
Input: "([)]"
Expected Output: false
*/