#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree, 0 if the tree is NULL
 *
 * The height of a binary tree is the number of edges in the longest path
 * from the root to a leaf. A tree with only one node has a height of 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

/* Recursively find the height of the left and right subtrees */
size_t left_height = binary_tree_height(tree->left);
size_t right_height = binary_tree_height(tree->right);

if (left_height > right_height)
return (left_height + 1);
else
return (right_height + 1);
}
