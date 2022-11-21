// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  explicit ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

/* Self-compile part end */

class Solution {
 public:
  int getDecimalValue(ListNode* head) {
    int num = 0;
    ListNode* n = head;
    while (n != nullptr) {
      num = num * 2 + n->val;
      n = n->next;
    }
    return num;
  }
};
