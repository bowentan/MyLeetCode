// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <algorithm>
#include <queue>

using std::make_pair;
using std::max;
using std::pair;
using std::queue;

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
  int maxDepth(TreeNode *root) {
    if (!root) return 0;
    queue<pair<TreeNode *, int>> q;
    q.push(make_pair(root, 1));
    int maxd = 0;
    while (!q.empty()) {
      pair<TreeNode *, int> p = q.front();
      maxd = max(maxd, p.second);
      if (p.first->left) {
        q.push(make_pair(p.first->left, p.second + 1));
      }
      if (p.first->right) {
        q.push(make_pair(p.first->right, p.second + 1));
      }
      q.pop();
    }
    return maxd;
  }
};
