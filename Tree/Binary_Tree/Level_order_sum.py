from createBinaryTree import Node, Insert, PrintTree

node = None

while(True):
    val = int(input("Input :: "))
    if(val == -1): break
    else:
        node = Insert(node, val)

PrintTree(node)

from collections import deque
def kthLargestLevelSum(root):
    vector = []
    q = deque()
    sum = 0
    if(root):
        q.append(root)
    vector = []
    while q:
        size = len(q)
        sum = 0
        for i in range(len(q)):
            temp = q.popleft()
            sum += temp.val
            if(temp.left):
                q.append(temp.left)
            if(temp.right):
                q.append(temp.right)
            del temp
        vector.append(sum)
    return vector


ans_vec = []
ans_vec = kthLargestLevelSum(node)

# Constructing a Tree from PreOrder Traversal

def construct(root, ele):
    if root is None:
        return Node(ele)
    else:
        if(ele < root.val):
            root.left = construct(root.left, ele)
        else:
            root.right = construct(root.right, ele)

    return root

    









