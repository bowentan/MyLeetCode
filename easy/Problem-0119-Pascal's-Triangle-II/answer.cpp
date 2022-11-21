// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <cstdint>
#include <vector>

using std::vector;
/* Self-compile part end */

class Solution {
 public:
  vector<int> getRow(int rowIndex) {
    vector<int> res{1};
    for (int i = 1; i <= rowIndex; ++i) {
      res.push_back(static_cast<int64_t>(res[i - 1]) * (rowIndex - i + 1) / i);
    }
    return res;
  }
};
