// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode* next;
  explicit ListNode(int x) : val(x), next(nullptr) {}
};

/* Self-compile part end */

class Solution {
 public:
  bool hasCycle(ListNode* head) {
    if (!head) return false;
    ListNode* slow = head;
    ListNode* fast = head->next;
    while (slow != fast) {
      if (!fast || !fast->next) return false;
      slow = slow->next;
      fast = fast->next->next;
    }
    return true;
  }
};
