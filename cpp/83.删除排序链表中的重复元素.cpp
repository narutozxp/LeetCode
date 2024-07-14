/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
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
    ListNode* deleteDuplicates(ListNode* head)
    {
        ListNode *slow = head, *fast = head;
        while (fast) {
            if (slow->val != fast->val) {
                slow->next = fast;
                slow = slow->next;
            }
            fast = fast->next;
        }

        if (slow) {
            slow->next = nullptr;
            return head;
        } else
            return nullptr;
    }
};
// @lc code=end
