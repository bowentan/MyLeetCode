// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <vector>

using std::vector;
/* Self-compile part end */

class Solution {
 public:
  int search(vector<int>& nums, int target) {
    int i = 0;
    int j = nums.size() - 1;
    int k;
    while (i <= j) {
      k = (i + j) / 2;
      if (nums[k] < target) {
        i = k + 1;
      } else if (nums[k] == target) {
        return k;
      } else {
        j = k - 1;
      }
    }
    return -1;
  }
};
