// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <cstdint>

using std::int64_t;
/* Self-compile part end */

class Solution {
 public:
  int mySqrt(int x) {
    if (x <= 1) return x;
    int left = 0;
    int right = x / 2;
    while (left <= right) {
      int mid = left + (right - left) / 2;
      if (static_cast<int64_t>(mid) * mid > x) {
        right = mid - 1;
      } else {
        left = mid + 1;
      }
    }
    return left - 1;
  }
};
