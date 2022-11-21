// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <algorithm>
#include <string>

using std::string;
using std::swap;
/* Self-compile part end */

class Solution {
 public:
  string reverseWords(string s) {
    int i = 0, j = 1;
    while (j < s.size()) {
      if (s[j] == ' ' || j + 1 == s.size()) {
        if (j + 1 == s.size()) ++j;
        for (int ii = i, jj = j - 1; ii < jj; ++ii, --jj) {
          swap(s[ii], s[jj]);
        }
        i = j + 1;
      }
      ++j;
    }
    return s;
  }
};
