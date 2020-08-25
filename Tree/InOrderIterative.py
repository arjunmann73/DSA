# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Stack():
    def __init__(self):
        self.size = 0
        self.ar = []
        
    def push(self, ele):
        self.size += 1
        self.ar.append(ele)
    
    def isEmpty(self):
        if self.size == 0:
            return True
        else:
            return False
    
    def pop(self):
        if self.isEmpty():
            return None
        else:
            self.size -= 1
            return self.ar.pop()
        
class Solution:       
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        self.res = []
        s = Stack()
        crawler = root
        while crawler != None or s.isEmpty() == False:
            if crawler == None:
                crawler = s.pop()
                print(crawler.val)
                self.res.append(crawler.val)
                crawler = crawler.right
            else:
                s.push(crawler)
                crawler = crawler.left
        return self.res
