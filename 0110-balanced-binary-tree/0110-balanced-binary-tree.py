# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        def check_balance(node):
            if not node:
                return 0
        
            left = check_balance(node.left)
            right = check_balance(node.right)

            if left == -1 or right == -1 or abs(right - left) > 1:
                return -1
        
            return max(left, right) + 1
    
        return check_balance(root) != -1
            
        