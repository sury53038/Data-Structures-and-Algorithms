from typing import Self


class Node:
    def __init__(self, data=None, left = None, right = None):
        self.val = data
        self.left = left
        self.right = right
    
    
class Tree:
    ans = None
    k = 0
    def Insert(self, node, data):
        if node is None:
            return Node(data)
        else:
            if(data < node.val):
                node.left = self.Insert(node.left, data)
            else:
                node.right =self.Insert(node.right, data)
            return node

    def PrintTree(self,node):
        if node is None:
            return
        else:
            self.PrintTree(node.left)
            print(node.val, end = " ")
            self.PrintTree(node.right)
    def kLargets(self, root, k):

        if root is None:
            return
        else:
            self.kLargets(root.right, k)

            self.k -= 1
            if(self.k == 0):
                self.ans = root.val
                return
            self.kLargets(root.left, self.k)           
                
root = None

create = Tree()

while(True):
    try:
        val = int(input("Enter Value : "))
        if(val == -1):
            break
        else:
            root = create.Insert(root, val)
    except ValueError:
        print("Invalid Input....")

create.PrintTree(root)
target_K = 3
create.k = target_K
create.ans = None

create.kLargets(root, create.k)
print()
print(f"{target_K} largest is ")
if create.ans is None:
    print("Insufficient number of nodes.")
else:
    print(create.ans)      
