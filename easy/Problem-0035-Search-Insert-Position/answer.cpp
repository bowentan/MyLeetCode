// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <vector>

using std::vector;
/* Self-compile part end */

class Solution {
 public:
  int searchInsert(vector<int>& nums, int target) {
    int i = 0;
    int j = nums.size() - 1;
    while (i <= j) {
      int k = (i + j) / 2;
      if (nums[k] < target) {
        i = k + 1;
      } else if (nums[k] == target) {
        return k;
      } else {
        j = k - 1;
      }
    }
    return i;
  }
};
