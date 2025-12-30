from sys import modules
from BST_creation import Node, PRINTTREE, CreateTree

node = None

while(True):
    val = int(input("Input: "))
    if(val == -1):
        break
    else:
        node = CreateTree(node, val)

PRINTTREE(node)

ans = float('inf')
prev = float('-inf')

def MinDistance(node):
    if(node is None):
        return
    else:
        MinDistance(node.left)
        if(prev != float('-inf')):
            curr_diff = node.value - prev
            ans = min(ans, curr_diff)
        
        prev = node.value

        MinDistance(node.right)
    return ans
print()

print("min diff : ")
print(ans)