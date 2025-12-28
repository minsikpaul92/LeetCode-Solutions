/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        for (int idx1 = 0; idx1 < nums.size(); idx1++) {
            for (int idx2 = idx1 + 1; idx2 < nums.size(); idx2++) {
                if (nums[idx1] + nums[idx2] == target) {
                    return {idx1, idx2};
                }
            }
        }
        return {}; // Return empty if no solution found
    }
};
// @lc code=end
