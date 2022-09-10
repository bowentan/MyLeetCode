// Copyright 2022 Bowen Tan

#include <algorithm>
#include <unordered_map>

using std::max;
using std::unordered_map;

class Solution {
 public:
  int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> count;
    int left = 0, max_len = 0;
    for (int right = 0; right < s.size(); ++right) {
      if (count.find(s[right]) != count.end()) {
        int value = count[s[right]] + 1;
        left = max(left, count[s[right]] + 1);
      }
      count[s[right]] = right;
      max_len = max(max_len, right - left + 1);
    }
    return max_len;
  }
};