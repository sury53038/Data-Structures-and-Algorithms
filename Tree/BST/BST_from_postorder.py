class Node:
    def __init__(self, val = None, left = None, right = None):
        self.val = val
        self.left = left
        self.right = right

class BST:
    def Insert(self,root, val):
        if(root is None):
            return Node(val)
        else:
            if(val < root.val):
                root.left = self.Insert(root.left, val)
            else:
                root.right = self.Insert(root.right, val)
        return root

    def PrintTree(self,root):
        if(root is None):
            return
        else:
            self.PrintTree(root.left)
            print(f"{root.val}", end = " ")
            self.PrintTree(root.right)

    def BSTfromPostOrder(self, arr, low, high):
        if(self.index < 0):
            return
        temp = arr[self.index]

        if(temp > high or temp < low): return
        else:
            root = Node(arr[self.index])
            self.index -= 1
            root.right = self.BSTfromPostOrder(arr, root.val, high)
            root.left = self.BSTfromPostOrder(arr, low, root.val)
        return root
    

               

root = None
Tree = BST()

arr =[1,7,5,50,40,10]
Tree.index = len(arr)-1

p_root = Tree.BSTfromPostOrder(arr, float('-inf'), float('inf'))



Tree.PrintTree(p_root)