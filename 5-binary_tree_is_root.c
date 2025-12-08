#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is the root of a binary tree
 * @node: Pointer to the node to check
 *
 * Return: 1 if the node is the root, 0 otherwise or if node is NULL
 *
 * Description:
 *   A node is considered the root if it has no parent. Returns 0 if the node
 *   is NULL.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
