class Node:
    def __init__(self, val = 0, left = None, right = None):
        self.val = val
        self.left= left
        self.right = right

class Node:
    def __init__(self, maxsize, min, max):
        self.maxSize = maxsize
        self.min = min
        self.max = max

class Tree:
    def Insert(self, root):
        val = int(input("Input :: "))
        if val == -1:
            return
        else:
            root = Node(val)
            print(f"Left child of {val} :: ")
            root.left = self.Insert(root.left)
            print(f"Right child of {val} :: ")
            root.right = self.Insert(root.right)
        return root
    

    def PrintTree(self, root):
        if root is None:
            return
        else:
            print(root.val, end = " ")
            self.PrintTree(root.left)
            self.PrintTree(root.right)
    
    def largestBST(self, root):
        
        if root is None:
            return Node(0, float('inf'), float('-inf'))
        
        left = self.largestBST(root.left)
        right = self.largestBST(root.right)

        if(left.max < root.val < right.min):
            return Node(
                (left.maxSize + right.maxSize + 1),
                min(root.val, left.min),
                max(root.val, right.max)
            )

        
        return Node(
            max(left.maxSize, right.maxSize),
            float('inf'),
            float('-inf')
        )
    


root = None
tree = Tree()

root = tree.Insert(root)
tree.PrintTree(root)
ans = tree.largestBST(root).maxSize