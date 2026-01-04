from operator import mod
from BST_creation import Node, Insert, PRINTTREE

root = None

while (True):
    val = int(input("Input :: "))
    if val == -1:
        break
    else:
        root = Insert(root, val)


PRINTTREE(root)

def checkDeadend(root, left, right):
    if root is None:
        return False
    elif(root.left is None and root.right is None):
        if(abs(left-right)== 2):
            return True
        else:
            return False
    else:
        return (checkDeadend(root.left, left, root.value) or checkDeadend(root.right, root.value, right))

ans = checkDeadend(root, float('-inf'), float('inf'))

print(ans)