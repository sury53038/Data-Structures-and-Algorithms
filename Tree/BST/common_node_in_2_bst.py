from BST_creation import Node, Insert, PRINTTREE

root1 = None
root2 = None
print("Creating BST 1 \n")
while (True):
    val = int(input("Input :: "))
    if val == -1:
        break
    else:
        root1 = Insert(root1, val)


print("\nCreating BST 2 \n")
while (True):
    val = int(input("Input :: "))
    if val == -1:
        break
    else:
        root2 = Insert(root2, val)


# =========Approach 1==========
def findCommon(root1, root2):
    ans = []
    s1 = []
    s2 = []

    while root1 is not None:
        s1.append(root1)
        root1 = root1.left

    while root2 is not None:
        s2.append(root2)
        root2 = root2.left

    while(s1 and s2):
        #if equal
        if(s1[-1].value == s2[-1].value):
            ans.append(s1[-1].value)
            root1 = s1[-1].right
            root2 = s2[-1].right
            s1.pop()
            s2.pop()
        elif(s1[-1].value < s2[-1].value):
            root1 = s1[-1].right
            s1.pop()
        else:
            root2 = s2[-1].right
            s2.pop()
        while root1 is not None:
            s1.append(root1)
            root1 = root1.left

        while root2 is not None:
            s2.append(root2)
            root2 = root2.left
    return ans

common_ele = []
common_ele = findCommon(root1, root2)

print(common_ele)
#...........................................................

# =========Approach 2==========
arr = [] 

def traverse(root,arr):
    if root is None:
        return
    else:
        arr.append(root.value)
        traverse(root.left,arr)
        traverse(root.right,arr)

ans = []
def findCom(arr,ans, root):
    if(root is None):
        return
    else:
        if(root.value in arr):
            ans.append(root.value)
        findCom(arr, ans, root.left)
        findCom(arr, ans, root.right)

traverse(root1, arr)
findCom(arr, ans, root2)

print(ans)
#...........................................................
