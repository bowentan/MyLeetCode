// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <string>
#include <vector>

using std::string;
using std::vector;
/* Self-compile part end */

class Solution {
 public:
  string longestCommonPrefix(vector<string>& strs) {
    int share_end = 0;
    while (share_end < strs[0].size()) {
      for (int j = 1; j < strs.size(); ++j) {
        if (strs[j][share_end] != strs[0][share_end]) {
          return strs[0].substr(0, share_end);
        }
      }
      ++share_end;
    }
    return strs[0].substr(0, share_end);
  }
};
