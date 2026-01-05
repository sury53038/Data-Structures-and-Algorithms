from BST_creation import Node, Insert, PRINTTREE

root = None

while(True):
    val = int(input("Input :: "))
    if val == -1: break
    else:
        root = Insert(root, val)

# temp = temp = float('-inf')
# def BSTfloor(root, key):
#     global temp
#     if root is None: return
#     elif(root.value > key):
#         BSTfloor(root.left, key)
#     elif(root.value < key):
#         temp = max(temp, root.value)
#     BSTfloor(root.left, key)
#     BSTfloor(root.right, key)
#     return temp

def floorVal(root, key):
    floor = -1

    while(root):
        if(root.value == key):
            return root.value
        elif(root.value > key):
            root = root.left
        else:
            floor = root.value
            root = root.right
    return floor



key = 999
ans = floorVal(root, key)

PRINTTREE(root)
print(f"\nFloor for {key} is ", ans)
