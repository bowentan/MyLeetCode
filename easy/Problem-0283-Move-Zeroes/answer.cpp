// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <vector>

using std::vector;
/* Self-compile part end */

class Solution {
 public:
  void moveZeroes(vector<int>& nums) {
    int write = 0;
    for (int read = 0; read < nums.size(); ++read) {
      if (nums[read] != 0) {
        nums[write] = nums[read];
        ++write;
      }
    }
    for (; write < nums.size(); ++write) {
      nums[write] = 0;
    }
  }
};
