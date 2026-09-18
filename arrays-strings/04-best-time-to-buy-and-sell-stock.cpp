#include <iostream>
using namespace std;

int main() {

    // Test Case 2
    int prices[] = {7, 6, 4, 3, 1};
    int n = 5;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {

        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    cout << "Maximum Profit: " << maxProfit;

    return 0;
}

/*
Test Case 1:
Input: [7, 1, 5, 3, 6, 4]
Expected Output: Maximum Profit: 5

Test Case 2:
Input: [7, 6, 4, 3, 1]
Expected Output: Maximum Profit: 0
*/