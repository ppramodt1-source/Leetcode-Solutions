class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
/*
Test Case 1:
Input: [2, 7, 11, 15], Target = 9
Expected Output: Indices: 0 1

Test Case 2:
Input: [3, 2, 4], Target = 6
Expected Output: Indices: 1 2
*/