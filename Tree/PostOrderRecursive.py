# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def post(self, node):
        if node == None:
            return
        self.post(node.left)
        self.post(node.right)
        self.res.append(node.val)
        
    def postorderTraversal(self, root: TreeNode) -> List[int]:
        self.res = []
        self.post(root)
        return self.res
