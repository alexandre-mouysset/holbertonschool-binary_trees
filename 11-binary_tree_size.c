#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure
 *
 * Return: Depth of the node, or 0 if tree is NULL
 *
 * Description:
 *   Measures the number of edges from the given node to the root. Returns 0
 *   if the node is NULL or is the root.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
