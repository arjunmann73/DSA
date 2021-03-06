  
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorder(self, node):
        if node == None:
            return
        self.inorder(node.left)
        self.res.append(node.val)
        self.inorder(node.right)
        
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        self.res = []
        self.inorder(root)
        return self.res
