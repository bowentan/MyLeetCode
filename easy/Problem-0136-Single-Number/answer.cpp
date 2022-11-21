// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <vector>

using std::vector;
/* Self-compile part end */

class Solution {
 public:
  int singleNumber(vector<int>& nums) {
    int c = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
      c ^= nums[i];
    }
    return c;
  }
};
