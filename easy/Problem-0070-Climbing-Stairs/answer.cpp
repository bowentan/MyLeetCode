// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <vector>

using std::vector;
/* Self-compile part end */

class Solution {
 public:
  int climbStairs(int n) {
    if (n < 3) return n;
    vector<int> steps(n + 1);
    steps[0] = 0;
    steps[1] = 1;
    steps[2] = 2;
    for (int i = 3; i < n + 1; ++i) {
      steps[i] = steps[i - 2] + steps[i - 1];
    }
    return steps[n];
  }
};
