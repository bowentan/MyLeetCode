// Copyright 2022 Bowen Tan

#include <queue>
using std::make_tuple;
using std::queue;
using std::tie;
using std::tuple;

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode* left, TreeNode* right)
      : val(x), left(left), right(right) {}
};

class Solution {
 public:
  bool isSameTree(TreeNode* p, TreeNode* q) {
    if (!p || !q) {
      return p == q;
    }
    queue<tuple<TreeNode*, TreeNode*>> que;
    que.push(make_tuple(p, q));
    TreeNode* pc = nullptr;
    TreeNode* qc = nullptr;
    while (!que.empty()) {
      tie(pc, qc) = que.front();
      if (pc->val != qc->val) return false;
      if (pc->left && qc->left) {
        que.push(make_tuple(pc->left, qc->left));
      } else if (pc->left != qc->left) {
        return false;
      }
      if (pc->right && qc->right) {
        que.push(make_tuple(pc->right, qc->right));
      } else if (pc->right != qc->right) {
        return false;
      }
      que.pop();
    }
    return true;
  }
};
