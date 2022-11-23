// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <unordered_map>
#include <vector>

using std::string;
using std::unordered_map;
using std::vector;
/* Self-compile part end */

class Solution {
 public:
  bool isValidSudoku(vector<vector<char>>& board) {
    vector<unordered_map<char, int>> col_check(9);
    vector<unordered_map<char, int>> box_check(9);
    unordered_map<char, int> row_check;
    for (int i = 0; i < 9; ++i) {
      for (int j = 0; j < 9; ++j) {
        if (board[i][j] == '.') continue;
        if (row_check.find(board[i][j]) != row_check.end()) {
          return false;
        }
        row_check[board[i][j]] = 1;

        if (col_check[j].find(board[i][j]) != col_check[j].end()) {
          return false;
        }
        col_check[j][board[i][j]] = 1;

        int box_index = i / 3 * 3 + j / 3;
        if (box_check[box_index].find(board[i][j]) !=
            box_check[box_index].end()) {
          return false;
        }
        box_check[box_index][board[i][j]] = 1;
      }
      row_check.clear();
    }
    return true;
  }
};
