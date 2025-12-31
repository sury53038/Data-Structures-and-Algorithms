# Tree should be balanced
# to create a bst from a sorted array, we use the concept similar to binary search.
# we simply take the mid node recursively and create the bst

from BST_creation import Node, Insert, PRINTTREE

root = None


arr = [9, 10, 16, 27, 37]

for ele in arr:
    root = Insert(root, ele)

PRINTTREE(root)

ans = []
def arr2Tree(arr, start, end):
    if(start > end): return
    mid = start + (end-start)//2
    ans.append(arr[mid])
    arr2Tree(arr, start, mid-1)
    arr2Tree(arr, mid+1, end)

start = 0
end = len(arr)-1
arr2Tree(arr, start, end)
print()
print(f"BST (lexiographical order) {ans}")




