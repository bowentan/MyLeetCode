// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <bits/stdc++.h>

#include <algorithm>

using std::min;

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

/* Self-compile part end */

class Solution {
 public:
  int minDepth(TreeNode *root) {
    if (!root) return 0;
    if (!root->left && !root->right) return 1;
    int left_depth = INT_MAX;
    int right_depth = INT_MAX;
    if (root->left) {
      left_depth = minDepth(root->left);
    }
    if (root->right) {
      right_depth = minDepth(root->right);
    }
    return min(left_depth, right_depth) + 1;
  }
};
