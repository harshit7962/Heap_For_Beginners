# Heap For Beginners
A heap is a special tree based data structure. More precisely, heap is a complete binary tree.
There are two types of heap:
1) **Min-Heap:** The key present at the root node must be the minimum among the keys present int all of its children.
2) **Max-Heap:** The key present at the root node must be the maximum among the keys present in all of its children.

A heap is basically an array, which is cache friendly and gives us hierarchy of tree...
The index of various elements in a heap is defined by its parent... 
* The index of left child of a parent is : 2 * i + 1 (i is the index of parent) 
* The index of right child of a parent is: 2 * i + 2 (i is the index of parent) 
* The index of parent of a node is: floor of i-1/2 (i is the index of child)
