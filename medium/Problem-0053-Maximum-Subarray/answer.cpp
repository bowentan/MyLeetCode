// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <algorithm>
#include <vector>

using std::max;
using std::vector;
/* Self-compile part end */

class Solution {
 public:
  int maxSubArray(vector<int>& nums) {
    int largest = nums[0];
    int current = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
      current = max(nums[i], current + nums[i]);
      largest = max(current, largest);
    }
    return largest;
  }
};
