#include "binary_trees.h"

/**
 * binary_tree_size - Measures the total number of nodes in a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Number of nodes in the tree, or 0 if tree is NULL
 *
 * Description:
 *   Recursively counts all nodes in the tree by summing the sizes of the
 *   left and right subtrees plus one for the current node.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
