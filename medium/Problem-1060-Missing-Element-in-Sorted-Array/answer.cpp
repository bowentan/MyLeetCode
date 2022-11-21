// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <vector>

using std::vector;
/* Self-compile part end */

class Solution {
 public:
  int miss_num(vector<int>& nums, int i) { return nums[i] - nums[0] - i; }

  int missingElement(vector<int>& nums, int k) {
    if (k > miss_num(nums, nums.size() - 1)) {
      return nums.back() + k - miss_num(nums, nums.size() - 1);
    }
    int i = 0;
    int j = nums.size() - 1;
    while (i != j) {
      int p = i + (j - i) / 2;
      int n = miss_num(nums, p);
      if (n < k) {
        i = p + 1;
      } else {
        j = p;
      }
    }
    return nums[i - 1] + k - miss_num(nums, i - 1);
  }
};
