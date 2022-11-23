// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <cmath>
/* Self-compile part end */

class Solution {
 private:
  bool is_square(int n) {
    if (n < 0) return false;
    int n_root = sqrt(n);
    return n_root * n_root == n;
  }

 public:
  int numSquares(int n) {
    while (n % 4 == 0) {
      n /= 4;
    }
    if (n % 8 == 7) {
      return 4;
    }
    if (is_square(n)) {
      return 1;
    }
    for (int i = 1; i < sqrt(n) + 1; ++i) {
      if (is_square(n - i * i)) {
        return 2;
      }
    }
    return 3;
  }
};
