from BST_creation import Node, CreateTree, PRINTTREE
from Tree.BST.delete_node import PrintTree

node = None

while(True):
    val = int(input("Input :: "))

    if(val == -1):
        break
    else:
        node = CreateTree(val)

PRINTTREE(node)

sum = 0
i = 0

def sumOfK(root, k, i):
    if(root is None):
        return
    else:
        sumOfK(root.left, k, i)
        sum += root.val
        i += 1
        if(i == k):
            return
        sumOfK(root.right, k, i)



def kthSmallest(root, k,i):
    if(root is None):
        return
    else:
        kthSmallest(root.left, k, i)
        i += 1
        if(i == k):
            return root.val
        
        kthSmallest(root.right, k, i)


print(sum)




        