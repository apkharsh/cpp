// algorithm to crate a binary tree from postorder and preorder
/*

1. Start from the end of postorder & pick an element to create a node
2. Decrement postorder idx
3. Search for picked element's pos in inorder
4. Call to build right subtree from inorder's pos+1 to n
5. Call to build left subtree from inorder 0 to pos-1
6. Return the node