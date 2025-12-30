from logging import root


class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None


def Insert(root, value):
    if root is None:
        return Node(value)
    elif(root.value < value):
        root.right = Insert(root.right, value)
    else:
        root.left = Insert(root.left, value)
    return root

def PrintTree(root):
    if root is None:
        return
    else:
        PrintTree(root.left)
        print(root.value, end = " ")
        PrintTree(root.right)

def findMax(root):
    if(root is None):
        return None
    else:
        while(root.right is not None):
            root = root.right
        return root


def DeleteNode(root, target):
    if root is None:
        return None
    elif(target < root.value):
        root.left = DeleteNode(root.left, target)
    
    elif(target > root.value):
        root.right = DeleteNode(root.right, target)
    else:
        #if  both child
        if(root.left and root.right):
            temp = findMax(root.left)
            root.value = temp.value
            root.left = DeleteNode(root.left, root.value)

        else:
            #if single child
            temp = root
            if(root.left is None):
                temp = root.right
                del root
                return temp
            elif(root.right is None):
                temp = root.left
                del root
                return temp    
    return root   

root_node = None

while(True):
    value = int(input("Input :: "))

    if(value == -1):
        break

    else:
        root_node = Insert(root_node, value)
    
PrintTree(root_node)

root_node=DeleteNode(root_node, 13)
print("\n")
PrintTree(root_node)
