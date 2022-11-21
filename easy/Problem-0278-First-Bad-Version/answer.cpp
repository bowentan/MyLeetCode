// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
bool isBadVersion(int version);
/* Self-compile part end */

class Solution {
 public:
  int firstBadVersion(int n) {
    int i = 0;
    int j = n;
    while (i < j - 1) {
      int k = i + (j - i) / 2;
      if (isBadVersion(k)) {
        j = k;
      } else {
        i = k;
      }
    }
    return i + 1;
  }
};
