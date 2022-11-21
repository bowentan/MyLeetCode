// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <string>
#include <unordered_map>
#include <vector>

using std::string;
using std::unordered_map;
using std::vector;
/* Self-compile part end */

class Solution {
 private:
  unordered_map<char, char> pairs{
      {'(', ')'},
      {'[', ']'},
      {'{', '}'},
  };

 public:
  bool isValid(string s) {
    vector<char> stack;
    for (int i = 0; i < s.size(); ++i) {
      if (stack.size() == 0) {
        stack.push_back(s[i]);
      } else {
        if (pairs[stack.back()] == s[i]) {
          stack.pop_back();
        } else {
          stack.push_back(s[i]);
        }
      }
    }
    return stack.empty();
  }
};
