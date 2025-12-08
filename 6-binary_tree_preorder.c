#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree in preorder
 * @tree: Pointer to the root node of the tree
 * @func: Function to call for each node's value
 *
 * Description:
 *   Traverses the tree in preorder (root, left, right) and applies @func to
 *   the value of each node. Does nothing if the tree or func is NULL.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
