// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <bits/stdc++.h>
/* Self-compile part end */

class Solution {
 public:
  int hammingWeight(uint32_t n) {
    int count = 0;
    while (n > 0) {
      count += n & 1;
      n = n >> 1;
    }
    return count;
  }
};
