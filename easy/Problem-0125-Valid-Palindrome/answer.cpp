// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <algorithm>
#include <string>

using std::isalnum;
using std::string;
using std::tolower;
/* Self-compile part end */

class Solution {
 public:
  bool isPalindrome(string s) {
    string ss, r_ss;
    for (char c : s) {
      if (isalnum(c)) {
        ss += tolower(c);
      }
    }
    r_ss.resize(ss.size());
    reverse_copy(ss.begin(), ss.end(), r_ss.begin());
    return ss == r_ss;
  }
};
