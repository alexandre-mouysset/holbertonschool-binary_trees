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
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
