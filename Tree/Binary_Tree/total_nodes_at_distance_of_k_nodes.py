
class Node:
    def __init__(self, val, left = None, right = None):
        self.val = val
        self.left = left
        self.right = right
    
class TreeNode:

    def Insert(self):
        val = int(input("Input :: "))
        if val == -1:
            return
        else:
            root = Node(val)
            print(f"Enter the left child of {val} :: ")
            root.left = self.Insert()
            print(f"Enter the right child of {val} :: ")
            root.right = self.Insert()
            return root
    
    def PrintTree(self, root):
        if root is None:
            return
        else:
            print(root.val, end = " ")
            self.PrintTree(root.left)
            self.PrintTree(root.right)


    def check(root, count, target):
        ans = []
        temp = root
        if(temp.val == target and count == 0):
            ans.append(root.val)
        elif(count ==  ):


            



    def kNodesDistant(self, root, key):
        if root is None:
            return
        if(count == 0):
            self.ans.append(root.val)
        elif(root.val == self.target):
            count = key
            count -= 1
            self.kNodesDistant(root.left, count)

if __name__ == "__main__":
    tree = TreeNode()

    root = tree.Insert()

    tree.PrintTree(root)


