# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def printval(self, node):
        if node == None:
            return
        else:
            self.res.append(node.val)
            self.printval(node.left)
            self.printval(node.right)
            #print(node.val)
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        self.res = []
        self.printval(root)
        return self.res
        
