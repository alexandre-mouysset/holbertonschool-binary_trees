#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree in-order
 * @tree: Pointer to the root node of the tree
 * @func: Function to call for each node's value
 *
 * Description:
 *   Traverses the tree in in-order (left, root, right) and applies @func
 *   to the value of each node. Does nothing if tree or func is NULL.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
