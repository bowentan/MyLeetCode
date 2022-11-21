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
  ListNode* middleNode(ListNode* head) {
    ListNode *fast, *slow;
    fast = slow = head;
    while (fast != nullptr && fast->next != nullptr) {
      slow = slow->next;
      fast = fast->next->next;
    }
    return slow;
  }
};
