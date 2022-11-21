// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <vector>

using std::vector;
/* Self-compile part end */

class Solution {
 public:
  int removeElement(vector<int>& nums, int val) {
    int track = 0;
    for (int i = 0; i < nums.size(); ++i) {
      if (nums[i] != val) {
        nums[track] = nums[i];
        ++track;
      }
    }
    return track;
  }
};
