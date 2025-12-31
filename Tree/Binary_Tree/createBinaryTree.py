class Node:
    def __init__(self, val = None, left = None, right = None):
        self.val = val
        self.left = left
        self.right = right

def Insert(root, val):
    if root is None:
        return Node(val)
    else:
        root.left = Insert(root.left, val)
        root.right = Insert(root.right, val)

def PrintTree(root):
    if root is None:
        return
    else:
        PrintTree(root.left)
        print(root.val, end = " ")
        PrintTree(root.right)
