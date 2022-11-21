// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <vector>

using std::vector;
/* Self-compile part end */

class Solution {
 public:
  vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> indices{0, static_cast<int>(numbers.size() - 1)};
    while (indices[0] < indices[1]) {
      if (numbers[indices[0]] + numbers[indices[1]] == target) {
        indices[0] += 1;
        indices[1] += 1;
        break;
      } else if (numbers[indices[0]] + numbers[indices[1]] > target) {
        --indices[1];
      } else {
        ++indices[0];
      }
    }
    return indices;
  }
};
