// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <queue>
using std::make_tuple;
using std::queue;
using std::tie;
using std::tuple;

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

// Solution codes
class Solution {
 public:
  bool isSymmetric(TreeNode *root) {
    if (!root->left || !root->right) return root->left == root->right;
    queue<tuple<TreeNode *, TreeNode *>> q;
    q.push(make_tuple(root->left, root->right));
    TreeNode *left = nullptr;
    TreeNode *right = nullptr;
    while (!q.empty()) {
      tie(left, right) = q.front();
      if (left->val != right->val) return false;
      if (left->left && right->right) {
        q.push(make_tuple(left->left, right->right));
      } else if (left->left != right->right) {
        return false;
      }
      if (left->right && right->left) {
        q.push(make_tuple(left->right, right->left));
      } else if (left->right != right->left) {
        return false;
      }
      q.pop();
    }
    return true;
  }
};
