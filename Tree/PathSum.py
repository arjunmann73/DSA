# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def path(self, node, res):
        if node == None:
            return False
        if node.val == res:
            if node.left == None and node.right == None:
                return True
        l = self.path(node.left, res - node.val)
        r = self.path(node.right, res - node.val)
        if l == True or r == True:
            return True
        else:
            return False
    def hasPathSum(self, root: TreeNode, suma: int) -> bool:
        return self.path(root, suma)
