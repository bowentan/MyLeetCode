// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <algorithm>
#include <vector>

using std::vector;
/* Self-compile part end */

class Solution {
 public:
  void rotate(vector<int>& nums, int k) {
    k = k % nums.size();
    reverse(nums.end() - k, nums.end());
    for (int i = 0, j = nums.size() - 1; i < j; ++i, --j) {
      int temp = nums[i];
      nums[i] = nums[j];
      nums[j] = temp;
    }
    reverse(nums.end() - (nums.size() - k), nums.end());
  }
};
