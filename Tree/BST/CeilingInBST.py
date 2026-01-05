from asyncio.windows_events import NULL
from BST_creation import Node, Insert, PRINTTREE


root = None
while(True):
    val = int(input("Input :: "))
    if(val == -1):
        break
    else:
        root = Insert(root, val)



PRINTTREE(root)
ceil = float('inf')
def findCeil(root, key):
    global ceil
    if root is None:
        return -1
    else:
        if(key > root.value):
            findCeil(root.right, key)
        elif(key < root.value):
            temp = root.value
            ceil = min(temp, ceil)
            findCeil(root.left, key)
        else:
            ceil = root.value
            return
        
key = 26
findCeil(root, key)
print(f"Found the ceiling value for {key}:: ", ceil)
        


