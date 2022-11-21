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
  vector<int> inorderTraversal(TreeNode *root) {
    vector<int> vals;
    stack<TreeNode *> st;
    TreeNode *c = root;
    while (c || !st.empty()) {
      while (c) {
        st.push(c);
        c = c->left;
      }
      c = st.top();
      vals.push_back(c->val);
      st.pop();
      c = c->right;
    }
    return vals;
  }
};
