// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <string>

using std::string;
/* Self-compile part end */

class Solution {
 public:
  int lengthOfLastWord(string s) {
    int word_length = 0;
    for (int i = s.size() - 1; i >= 0; --i) {
      if (s[i] != ' ') {
        ++word_length;
      }
      if (word_length > 0 && (s[i] == ' ')) {
        break;
      }
    }
    return word_length;
  }
};
