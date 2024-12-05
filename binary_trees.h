#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/* Data structure for a binary tree node */
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/* Prototypes for mandatory tasks */

/* Task 0: Create a binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Task 1: Insert a node as the left child */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* Task 2: Insert a node as the right child */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* Task 3: Delete an entire binary tree */
void binary_tree_delete(binary_tree_t *tree);

/* Task 4: Check if a node is a leaf */
int binary_tree_is_leaf(const binary_tree_t *node);

/* Task 5: Check if a node is a root */
int binary_tree_is_root(const binary_tree_t *node);

/* Task 6: Pre-order traversal */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* Task 7: In-order traversal */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* Task 8: Post-order traversal */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* Task 9: Measure the height of a binary tree */
size_t binary_tree_height(const binary_tree_t *tree);

/* Utility function for printing binary trees (given) */
void binary_tree_print(const binary_tree_t *tree);

#endif /* BINARY_TREES_H */

