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
    
    def peekTop(self):
        if self.isEmpty():
            return None
        else:
            return self.ar[self.size - 1]

class Solution:
    def postorderTraversal(self, root: TreeNode) -> List[int]:
        self.res = []
        s = Stack()
        crawler = root
        while crawler != None or s.isEmpty() == False:
            if crawler != None:
                if crawler.right != None:
                    s.push(crawler.right)
                s.push(crawler)
                crawler = crawler.left
            else:
                crawler = s.pop()
                if crawler.right != None and crawler.right == s.peekTop():
                    temp = s.pop()
                    s.push(crawler)
                    crawler = temp
                else:
                    self.res.append(crawler.val)
                    crawler = None        
        return self.res
