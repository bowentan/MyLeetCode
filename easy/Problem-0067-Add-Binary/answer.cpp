// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <string>

using std::string;
/* Self-compile part end */

class Solution {
 public:
  string addBinary(string a, string b) {
    string result = "";
    bool carry = false;
    for (int i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0; --i, --j) {
      char ai = (i >= 0) ? a[i] : '0', bj = (j >= 0) ? b[j] : '0';
      if (ai - bj != 0) {
        result = (carry ? '0' : '1') + result;
      } else {
        result = (carry ? '1' : '0') + result;
        carry = (ai == '0') ? false : true;
      }
    }
    return carry ? '1' + result : result;
  }
};
