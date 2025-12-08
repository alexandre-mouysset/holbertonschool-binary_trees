#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree in post-order
 * @tree: Pointer to the root node of the tree
 * @func: Function to call for each node's value
 *
 * Description:
 *   Traverses the tree in post-order (left, right, root) and applies @func
 *   to the value of each node. Does nothing if tree or func is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;
	size_t max_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		max_height = left_height;
	else
		max_height = right_height;

	return (1 + max_height);
}
