#include <stack>
using namespace std;

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
    bool isPalindrome(ListNode* head) {
        stack<int> record;
        ListNode * fast = head;
        ListNode * slow = head;
        while(fast && fast->next){
            record.push(slow->val);
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast!=nullptr){
            record.push(slow->val);
        }
        while (!record.empty()) {
            if(slow->val != record.top()){
                return false;
            }
            slow = slow->next;
            record.pop();
        }
        return true;

    }
};
// @leet end
