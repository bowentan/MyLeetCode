// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <vector>

using std::vector;
/* Self-compile part end */

class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    int track = 1;
    for (int left = 0, right = 0; right < nums.size(); ++right) {
      if (nums[right] != nums[left]) {
        nums[track] = nums[right];
        left = right;
        ++track;
      }
    }
    return track;
  }
};
