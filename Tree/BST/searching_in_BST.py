#GFG Question Link
#https://www.geeksforgeeks.org/problems/search-a-node-in-bst/1?page=1&difficulty[]=-1&category[]=Binary%20Search%20Tree&sortBy=submissions


class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

def Insert(root, value):
    if root is None:
        return Node(value)
    else:
        if(value < root.value):
            root.left = Insert(root.left, value)
        else:
            root.right = Insert(root.right, value)
    return root

def PrintTree(root):
    if root is None:
        return
    else:
        PrintTree(root.left)
        print(root.value, end = " ")
        PrintTree(root.right)


def SearchTree(root, target):
    if(root is None):
        return 0
    elif(root.value == target):
        print("Match found... ")
        return 1
    elif(root.value < target):
        return SearchTree(root.right, target)
    else:
        return SearchTree(root.left, target)

    return 0

root_node = None

# Creating a binary search tree

while(True):
        value = int(input("Input :: "))
        if(value == -1):
            break
        else:
            root_node = Insert(root_node, value)

PrintTree(root_node)

target = int(input("Enter the search target :: "))

outp = SearchTree(root_node, target)

if(outp != 1):
    print("Oops... Better luck next time!!!!")

