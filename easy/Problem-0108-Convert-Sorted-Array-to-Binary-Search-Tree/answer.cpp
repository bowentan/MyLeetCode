// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <vector>

using std::vector;
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

/* Self-compile part end */

class Solution {
 private:
  TreeNode* recursion(vector<int>& nums, int left, int right) {
    if (left > right) return nullptr;
    int mid = left + (right - left) / 2;
    TreeNode* leftn = recursion(nums, left, mid - 1);
    TreeNode* rightn = recursion(nums, mid + 1, right);
    return new TreeNode(nums[mid], leftn, rightn);
  }

 public:
  TreeNode* sortedArrayToBST(vector<int>& nums) {
    return recursion(nums, 0, nums.size() - 1);
  }
};
