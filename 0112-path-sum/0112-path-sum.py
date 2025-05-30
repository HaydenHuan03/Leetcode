# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        #base case
        if root is None:
            return False
        
        target = targetSum - root.val

        if target == 0 and root.left is None and root.right is None:
            return True
        
        left = self.hasPathSum(root.left, target) if root.left else False
        right = self.hasPathSum(root.right, target) if root.right else False

        return left or right
        

        