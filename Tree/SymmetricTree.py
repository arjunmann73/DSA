# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isMirror(self, tree1, tree2):
        if tree1 == None and tree2 == None:
            return True
        if tree1 == None or tree2 == None:
            return False
        
        if tree1.val == tree2.val and self.isMirror(tree1.left, tree2.right) == True and self.isMirror(tree1.right, tree2.left) == True:
            return True
        else:
            return False
    def isSymmetric(self, root: TreeNode) -> bool:
        return self.isMirror(root, root)
