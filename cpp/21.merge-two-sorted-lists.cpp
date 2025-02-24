// @leet start
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        ListNode empty;
        ListNode* new_list = &empty;
        while (list1 && list2) {
            if (list1->val <= list2->val) {
                new_list->next = list1;
                list1 = list1->next;
            } else {
                new_list->next = list2;
                list2 = list2->next;
            }
            new_list = new_list->next;
        }
        if (!list1) {
            new_list->next = list2;
            return empty.next;
        }
        new_list->next = list1;
        return empty.next;
    }
};
// @leet end
