/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
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
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *res = new ListNode;
        ListNode *res_tmp = res;
        do
        {
            res->val = res->val + l1->val + l2->val; // a + b + cin
            // next node (default value is cin)
            res->next = new ListNode(int(res->val / 10));
            res->val = res->val % 10;

            if (l1->next == nullptr && l2->next == nullptr)
            {
                // delete 0
                if (res->next->val == 0)
                {
                    res->next = nullptr;
                }
                break;
            }

            if (l1->next == nullptr)
            {
                l1->val = 0;
            }
            else
            {
                l1 = l1->next;
            }

            if (l2->next == nullptr)
            {
                l2->val = 0;
            }
            else
            {
                l2 = l2->next;
            }
            res = res->next;

        } while (1);
        return res_tmp;
    }
};
// @lc code=end
