// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <algorithm>
#include <vector>

using std::reverse;
using std::vector;
/* Self-compile part end */

class Solution {
 public:
  vector<int> plusOne(vector<int>& digits) {
    vector<int> new_digits;
    int inc = 1;
    for (int i = digits.size() - 1; i >= 0; --i) {
      int digit_sum = digits[i] + inc;
      if (digit_sum == 10) {
        new_digits.push_back(0);
      } else {
        new_digits.push_back(digit_sum);
      }
      inc = digit_sum == 10;
    }
    if (inc) {
      new_digits.push_back(1);
    }
    reverse(new_digits.begin(), new_digits.end());
    return new_digits;
  }
};
