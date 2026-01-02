class Node:
    def __init__(self, val = None, left = None, right = None):
        self.val = val
        self.left = left
        self.right = right
class BST:
    def __init__(self):
        self.arr = []
    def Insert(self, root, val):
        if(root is None):
            return Node(val)
        else:
            if(val < root.val):
                root.left = self.Insert(root.left, val)
            else:
                root.right = self.Insert(root.right, val)
        return root
    
    def PrintTree(self, root):
        if(root is None):
            return
        else:
            self.PrintTree(root.left)
            print(root.val, end = " ")
            self.PrintTree(root.right)
    def PrintRange(self, root, p, q):
        small = min(p,q)
        big = max(p,q)
        if(root is None):
            return
        elif(root.val < small):
            self.PrintRange(root.right, p, q)
        elif(root.val > big):
            self.PrintRange(root.left, p, q)
        else:
            self.arr.append(root.val)
            self.PrintRange(root.left, p, q)
            self.PrintRange(root.right, p, q)



tree = BST()

root = None

while(True):
    val = int(input("Enter value :: "))
    if(val == -1):
        break
    else:
        root = tree.Insert(root,val)

tree.PrintTree(root)

arr = []
arr = tree.arr
tree.PrintRange(root, 5, 25)
for i in arr:
    print(i)

