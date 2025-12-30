#creating a Tree

#Leetcode (https://leetcode.com/problems/validate-binary-search-tree/submissions/1869201890/)

class Solution:

    def checkTree(self, root, prev):
        if (root is None):
            return 1
        else:
            if(self.checkTree(root.left, prev) == 0):
                return 0
            #creating a test change to check the git updation
            
            if(root.val <= prev):
                return 0
            
            prev = root.val

            if(self.checkTree(root.right, prev) == 0):
                return 0
        return 1

            
    def isValidBST(self,root=None) -> bool:
        prev = float('-inf')
        ans = self.checkTree(root, prev)
        if(ans == 0):
            return False
        else:
            return True
         
class Node:
    def __init__(self, val, left = None, right = None):
        self.val = val
        self.left = left
        self.right = right

def CreateTree():
    val = int(input("Enter the value :: "))
    if(val == -1):
        return None
    else:
        try:
            node = Node(val)
            print(f"Left Child of {val} ")
            node.left = CreateTree()
            print(f"Right child of {val} ")
            node.right = CreateTree()
            return node
        except ValueError:
            print("Invalid Input... Enter again")
    
def PrintTree(root):
    if root is None:
        return
    else:
        PrintTree(root.left)
        print(root.val, end = " ")
        PrintTree(root.right)


root = CreateTree()
PrintTree(root)

solve = Solution()

ans = solve.isValidBST(root)

print("\n")
if(ans == True):
    print("It is a BST")
else:
    print("It is not a BST")

