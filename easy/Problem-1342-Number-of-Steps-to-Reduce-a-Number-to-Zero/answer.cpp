// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */

/* Self-compile part end */

class Solution {
 public:
  int numberOfSteps(int num) {
    if (num == 0) return 0;
    int count = 0;
    while (num > 0) {
      count += (num & 1) + 1;
      num = num >> 1;
    }
    return count - 1;
  }
};
