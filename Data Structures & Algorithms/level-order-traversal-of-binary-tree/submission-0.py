# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

from collections import deque

class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        
        lvl_order_list = []
        deq = deque()

        if root:
            deq.append(root)

        while(len(deq) > 0):
            level_list = []
            for idx in range(len(deq)):
                curr_node = deq.popleft()
                level_list.append(curr_node.val)

                if (curr_node.left):
                    deq.append(curr_node.left)
                if (curr_node.right):
                    deq.append(curr_node.right)
            lvl_order_list.append(level_list)
        
        return lvl_order_list



         