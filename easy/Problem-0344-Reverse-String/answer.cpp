// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <algorithm>
#include <vector>

using std::swap;
using std::vector;
/* Self-compile part end */

class Solution {
 public:
  void reverseString(vector<char>& s) {
    for (int i = 0, j = s.size() - 1; i < j; ++i, --j) {
      swap(s[i], s[j]);
    }
  }
};
