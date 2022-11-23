// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <bits/stdc++.h>

#include <algorithm>
#include <vector>
using std::min;
using std::vector;
/* Self-compile part end */

class Solution {
 public:
  int numSquares(int n) {
    vector<int> sols(n + 1, INT_MAX);
    sols[0] = 0;
    for (int i = 1; i <= n; ++i) {
      for (int j = 1; j < static_cast<int>(sqrt(i)) + 1; ++j) {
        sols[i] = min(sols[i - j * j] + 1, sols[i]);
      }
    }
    return sols[n];
  }
};
