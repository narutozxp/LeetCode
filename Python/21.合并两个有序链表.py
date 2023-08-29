#
# @lc app=leetcode.cn id=21 lang=python3
#
# [21] 合并两个有序链表
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        Ans  = ListNode(1)
        backup = Ans
        while  list1 or  list2:
            # print("x")
            # print(list1.val,list2.val)
            if list1 and list2:
                if list1.val <= list2.val:
                    Ans.next = ListNode(list1.val)
                    # print(list1.val)
                    list1 = list1.next
                    Ans = Ans.next
                else:
                    Ans.next = ListNode(list2.val)
                    # print(list2.val)
                    list2 = list2.next
                    Ans = Ans.next
            else:
                if not list1:
                    Ans.next = list2
                    list2 = 0
                else:
                    Ans.next = list1
                    list1 = 0
        # print(temp)
        return backup.next


# @lc code=end

