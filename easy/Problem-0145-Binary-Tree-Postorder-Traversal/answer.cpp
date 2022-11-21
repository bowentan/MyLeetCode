// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <stack>
#include <vector>
using std::stack;
using std::vector;

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
  vector<int> postorderTraversal(TreeNode *root) {
    vector<int> res;
    stack<TreeNode *> s;
    TreeNode *last = nullptr;
    while (root || !s.empty()) {
      if (root) {
        s.push(root);
        root = root->left;
      } else {
        TreeNode *c = s.top();
        if (c->right && c->right != last) {
          root = c->right;
        } else {
          res.push_back(c->val);
          s.pop();
          last = c;
        }
      }
    }
    return res;
  }
};
