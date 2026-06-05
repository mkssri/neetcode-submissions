# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        
        dummy = node = ListNode()

        while(list1 != None and list2 != None):
            if(list1.val <= list2.val):
                node.next   = ListNode(list1.val)
                list1       = list1.next
            else:
                node.next   = ListNode(list2.val)
                list2       = list2.next
            node = node.next
   
        if(list1 == None):
            node.next = list2
        if(list2 == None):
            node.next = list1

        return dummy.next