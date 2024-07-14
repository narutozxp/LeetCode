/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
    {
        ListNode *headA_Beg = headA, *headB_Beg = headB;

        while (headA != headB) {
            if (headA == nullptr) {
                headA = headB_Beg;
            } else {
                headA = headA->next;
            }

            if (headB == nullptr) {
                headB = headA_Beg;
            } else {
                headB = headB->next;
            }
        }

        return headA;
    }
};
// @lc code=end
