#Creating a binary search tree.

class Node:
    def __init__(self, value = None):
        self.value = value
        self.left = None
        self.right= None
        
def PRINTTREE(root):
    if root is None:
        return
    else:
        PRINTTREE(root.left)
        print(root.value, end = " ")
        PRINTTREE(root.right)



def CreateTree(root, value):
    if root is None:
        return Node(value)
    else:
        if(value < root.value):
            root.left = CreateTree(root.left, value)
        else:
            root.right = CreateTree(root.right, value)
    return root
root_node = None


# while(True):
#     val = int(input("Input :: "))
#     if(val == -1):
#         break
#     root_node = CreateTree(root_node, val)


def Insert(root, value):
    if(root is None):
        return Node(value)
    else:
        if(root.value > value):
            root.left = Insert(root.left, value)
        else:
            root.right = Insert(root.right, value)
    return root