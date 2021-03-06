  
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
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        self.res = []
        s = Stack()
        s.push(root)
        crawler =  None
        while s.isEmpty() == False:
            crawler = s.pop()
            if crawler == None:
                print("NONE BRO")
                break
            print(crawler.val)
            self.res.append(crawler.val)
            if crawler.right != None:
                s.push(crawler.right)
            if crawler.left != None:
                s.push(crawler.left)
        return self.res
