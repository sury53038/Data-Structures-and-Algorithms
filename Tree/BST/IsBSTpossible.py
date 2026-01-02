class Node:
    def __init__(self, val = None, left = None, right = None):
        self.val = val
        self.left = left
        self.right = right


class BST:
    def Insert(self, root, val):
        if root is None:
            return
        else:
            if val < root.val:
                root.left = self.Insert(root.left, val)
            else:
                root.right = self.Insert(root.right, val)
        return root
    
    def PrintTree(self, root):
        if(root is None): return
        else:
            print(root.val, end = " ")
            self.PrintTree(root.left)
            self.PrintTree(root.right)

    
    def isPossibleBST(self, arr, low, high):
        if(self.index >= len(arr)):
            return
        temp = arr[self.index]
        if(temp > high or temp < low):
            return                
        else:
            root = Node(temp)
            self.index += 1
            root.left = self.isPossibleBST(arr, low, root.val)
            root.right = self.isPossibleBST(arr, root.val, high)
        return root


arr = [5,35,4]

tree = BST()
tree.index = 0
ans = tree.isPossibleBST(arr,float('-inf'), float('inf'))
tree.PrintTree(ans)
if(tree.index == len(arr)):
    print("Possible")
else:
    print("Not Possible")
