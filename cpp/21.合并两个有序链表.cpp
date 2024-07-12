/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
    ListNode *res = new ListNode(-1);
    ListNode *res_tmp = res;
    ListNode *p1 = list1;
    ListNode *p2 = list2;
    while (p1 != nullptr && p2 != nullptr) {
      if (p1->val <= p2->val) {
        res->next = p1;
        p1 = p1->next;
      } else {
        res->next = p2;
        p2 = p2->next;
      }
      res = res->next;
    }
    // one or two list is empty
    if (p1 == nullptr) {
      res->next = p2;
    }
    if (p2 == nullptr) {
      res->next = p1;
    }

    return res_tmp->next;
  }
};

// @lc code=end
