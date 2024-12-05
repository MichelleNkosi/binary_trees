#include "binary_trees.h"

/**
 * height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: The height of the tree.
 */
size_t height(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (1 + MAX(height(tree->left), height(tree->right)));
}

/**
 * is_perfect_helper - Helper function that checks if the tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 * @depth: The expected depth of leaf nodes.
 * @level: Current level of the node.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int is_perfect_helper(const binary_tree_t *tree, size_t depth, size_t level)
{
if (tree == NULL)
return (1);
if (tree->left == NULL && tree->right == NULL)
return (level == depth);
if (tree->left == NULL || tree->right == NULL)
return (0);
return (is_perfect_helper(tree->left, depth, level + 1) &&
is_perfect_helper(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
size_t depth = height(tree) - 1;
return (is_perfect_helper(tree, depth, 0));
}
