# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Queue:
    def __init__(self):
        self.ar = []
        self.size = 0
    
    def isEmpty(self):
        if self.size == 0:
            return True
        else:
            return False
    
    def enqueue(self, ele):
        self.size += 1
        self.ar.append(ele)
    
    def dequeue(self):
        if self.isEmpty():
            return None
        else:
            self.size -= 1
            return self.ar.pop(0)
        
class Solution:
    def levelOrder(self, root: TreeNode) -> List[List[int]]:
        if root == None:
            return []
        q = Queue()
        q.enqueue(root)
        res = []
        while q.isEmpty() == False:
            size = q.size
            temp = []
            for i in range(size):
                node = q.dequeue()
                temp.append(node.val)
                if node.left != None:
                    q.enqueue(node.left)
                if node.right != None:
                    q.enqueue(node.right)
            res.append(temp)
        return res
            
