// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <string>

using std::string;
/* Self-compile part end */

class Solution {
 public:
  int strStr(string haystack, string needle) {
    if (needle.size() == 0) return 0;
    int i = 0;
    int j = 0;
    while (j < haystack.size()) {
      if (haystack[j] == needle[i]) {
        ++i;
        if (i == needle.size()) break;
      } else {
        j = j - i;
        i = 0;
      }
      ++j;
    }
    if (j == haystack.size()) return -1;
    return j - i + 1;
  }
};
