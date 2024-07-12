/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy_node,* dummy = &dummy_node;
        dummy->next = head;
        ListNode * index=findFromEnd(dummy,n+1);
        index->next = index->next->next;
        return dummy->next;
    }

    
    /**
     * @brief 返回列表倒数第k个节点
     * @param head 
     * @param k 
     * @return ListNode*
     */
    ListNode* findFromEnd(ListNode* head,int k){
        ListNode* res = head;
        for (size_t i = 0; i < k; i++)
        {
            head = head->next;
        }

        while(head){
            res = res->next;
            head = head->next;
        }
        return res;
    }
};
// @lc code=end

