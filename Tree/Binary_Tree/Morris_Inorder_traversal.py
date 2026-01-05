from multiprocessing import ProcessError


class Node:
    def __init__(self, val):
        self. val = val
        self.left = None
        self.right = None
class BinaryTree:
    ans = []
    def CreateTree(self, root):
        val = int(input("Input :: "))
        if(val == -1):
            return
        root = Node(val)
        print(f"Left child of {val} :: ")
        root.left = self.CreateTree(root.left)
        print(f"Right child of {val} ::")
        root.right = self.CreateTree(root.right)
        return root
    
    def mPreOrder(self, root):
        while(root):
            if not root.left:
                # self.ans.append(root.val)
                print(root.val, end = " ")
                root = root.right
            else:
                curr = root.left
                while(curr.right and curr.right is not root):
                    curr = curr.right

                if curr.right is None:
                    curr.right = root
                    # self.ans.append(root.val)
                    print(root.val, end = " ")
                    root = root.left
                else:
                    curr.right = None
                    root = root.right

    def mInOrder(self, root):
        self.arr = []
        while(root):
            if not root.left:
                print(root.val, end = " ")
                # self.ans.append(root.val)
                root = root.right
            else:
                curr = root.left
                while(curr.right and curr.right != root):
                    curr = curr.right
                    
                if(curr.right == None):
                    curr.right = root
                    root = root.left
                else:
                    # self.ans.append(root.val)
                    print(root.val, end = " ")
                    curr.right = None
                    root = root.right
        # return self.arr


tree = BinaryTree()
root = None
root = tree.CreateTree(root)
tree.mPreOrder(root)
tree.mInOrder(root)
