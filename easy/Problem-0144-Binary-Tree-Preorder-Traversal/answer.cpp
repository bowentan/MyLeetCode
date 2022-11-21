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
  vector<int> preorderTraversal(TreeNode *root) {
    vector<int> res;
    if (!root) return res;
    stack<TreeNode *> s;
    s.push(root);
    while (!s.empty()) {
      TreeNode *c = s.top();
      s.pop();
      while (c) {
        res.push_back(c->val);
        if (c->right) {
          s.push(c->right);
        }
        c = c->left;
      }
      // c = s.top();
      // res.push_back(c->val);
      // s.pop();
    }
    return res;
  }
};
