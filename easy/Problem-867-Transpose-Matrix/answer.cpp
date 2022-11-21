// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <vector>
using std::vector;
/* Self-compile part end */

class Solution {
 public:
  vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int nrow = matrix.size();
    int ncol = matrix[0].size();
    vector<vector<int>> ans(ncol, vector<int>(nrow, 0));
    for (int i = 0; i < nrow; ++i) {
      for (int j = 0; j < ncol; ++j) {
        ans[j][i] = matrix[i][j];
      }
    }
    return ans;
  }
};
