// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <vector>
using std::vector;
/* Self-compile part end */

class Solution {
 public:
  vector<int> sortedSquares(vector<int>& nums) {
    vector<int> sorted_square(nums.size());
    int i = 0;
    int j = nums.size() - 1;
    int k = sorted_square.size() - 1;
    while (k >= 0) {
      if (nums[i] * nums[i] > nums[j] * nums[j]) {
        sorted_square[k] = nums[i] * nums[i];
        ++i;
      } else {
        sorted_square[k] = nums[j] * nums[j];
        --j;
      }
      --k;
    }
    return sorted_square;
  }
};
