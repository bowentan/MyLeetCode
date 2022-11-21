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
  ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* prehead = new ListNode(0, head);
    ListNode *fast, *slow;
    fast = slow = prehead;
    for (int i = 0; i < n + 1; ++i) {
      fast = fast->next;
    }
    while (fast) {
      slow = slow->next;
      fast = fast->next;
    }
    slow->next = slow->next->next;
    return prehead->next;
  }
};
