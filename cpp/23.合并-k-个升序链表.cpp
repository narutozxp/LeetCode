/*
 * @lc app=leetcode.cn id=23 lang=cpp
 *
 * [23] 合并 K 个升序链表
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
#include <queue>
#include <vector>
using namespace std;
class Solution {
public:
    struct element {
        int val;
        ListNode* ptr;
        bool operator<(const element& rhs) const
        {
            return val > rhs.val;
        }
    };
    priority_queue<element> pq;
    ListNode* mergeKLists(vector<ListNode*>& lists)
    {

        // add head node to queue
        for (auto node : lists) {
            if (node != nullptr)
                pq.push({ node->val, node });
        }

        ListNode dummy, *p = &dummy;
        while (!pq.empty()) {
            auto f = pq.top();
            pq.pop();
            p->next = f.ptr;
            p = p->next;
            if (f.ptr->next)
                pq.push({ f.ptr->next->val, f.ptr->next });
        }

        return dummy.next;
    }
};
// @lc code=end
