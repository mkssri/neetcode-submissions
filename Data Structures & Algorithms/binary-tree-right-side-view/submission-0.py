# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

from collections import deque

class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
          res = []
          d   = deque([root])

          while (len(d) > 0):
            right_node = False
            for idx in range(len(d)):
                curr = d.popleft()

                if curr:
                    right_node = True
                    if curr.left:
                        d.append(curr.left)
                    if curr.right:
                        d.append(curr.right)
            
            if right_node:
                res.append(curr.val)

          return res
                         