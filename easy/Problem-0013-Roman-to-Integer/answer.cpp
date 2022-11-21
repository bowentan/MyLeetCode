// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <map>
#include <string>

using std::map;
using std::string;
/* Self-compile part end */

class Solution {
 private:
  map<char, int> symval{
      {'I', 1},   {'V', 5},   {'X', 10},   {'L', 50},
      {'C', 100}, {'D', 500}, {'M', 1000},
  };

 public:
  int romanToInt(string s) {
    int num = 0;
    int i = 0;
    while (i < s.size()) {
      int d = symval[s[i + 1]] / symval[s[i]];
      if (d > 1 && d == 5 || d == 10) {
        num += symval[s[i + 1]] - symval[s[i]];
        i += 2;
      } else {
        num += symval[s[i]];
        ++i;
      }
    }
    return num;
  }
};
