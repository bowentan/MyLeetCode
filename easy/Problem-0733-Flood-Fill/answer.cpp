// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <queue>
#include <tuple>
#include <vector>
using std::make_tuple;
using std::queue;
using std::tie;
using std::tuple;
using std::vector;
/* Self-compile part end */

class Solution {
 public:
  vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                int newColor) {
    if (image[sr][sc] == newColor) return image;
    queue<tuple<int, int>> q{{make_tuple(sr, sc)}};
    int i, j;
    int nrow = image.size();
    int ncol = image[0].size();
    int old_color = image[sr][sc];
    while (q.size() > 0) {
      tie(i, j) = q.front();
      image[i][j] = newColor;
      q.pop();
      if (i - 1 >= 0 && image[i - 1][j] == old_color) {
        q.push(make_tuple(i - 1, j));
      }
      if (i + 1 < nrow && image[i + 1][j] == old_color) {
        q.push(make_tuple(i + 1, j));
      }
      if (j + 1 < ncol && image[i][j + 1] == old_color) {
        q.push(make_tuple(i, j + 1));
      }
      if (j - 1 >= 0 && image[i][j - 1] == old_color) {
        q.push(make_tuple(i, j - 1));
      }
    }
    return image;
  }
};
