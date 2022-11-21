// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <algorithm>
#include <cmath>
#include <vector>
using std::vector;
/* Self-compile part end */

class Solution {
 public:
  vector<int> digit_count(int n) {
    vector<int> count(10, 0);
    while (n > 0) {
      count[n % 10]++;
      n /= 10;
    }
    return count;
  }

  bool reorderedPowerOf2(int n) {
    vector<int> n_digits = digit_count(n);
    int max = 0;
    for (int i = 9; i >= 0; --i) {
      for (int j = 0; j < n_digits[i]; ++j) {
        max = max * 10 + i;
      }
    }
    int max_n_digit = log2(max) + 1;
    for (int i = 0; i <= max_n_digit; ++i) {
      if (n_digits == digit_count(1 << i)) {
        return true;
      }
    }
    return false;
  }
};
