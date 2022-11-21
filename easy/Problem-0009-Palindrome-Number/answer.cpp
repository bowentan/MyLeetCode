// Copyright 2022 Bowen Tan

class Solution {
 public:
  bool isPalindrome(int x) {
    if (x < 0 || x % 10 == 0 && x != 0) return false;
    int inverted = 0;
    while (x > inverted) {
      inverted = inverted * 10 + x % 10;
      x /= 10;
    }
    return inverted == x || inverted / 10 == x;
  }
};
