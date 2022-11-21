// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <algorithm>

using std::abs;
using std::max;
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
  int height(TreeNode *node) {
    if (!node) return 0;
    return 1 + max(height(node->left), height(node->right));
  }

  bool isBalanced(TreeNode *root) {
    if (!root) return true;
    return abs(height(root->left) - height(root->right)) <= 1 &&
           isBalanced(root->left) && isBalanced(root->right);
  }
};
