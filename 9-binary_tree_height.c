#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree, or 0 if tree is NULL
 *
 * Description:
 *   Recursively measures the height of a binary tree. The height of a node
 *   is the number of edges on the longest path from that node to a leaf.
 *   Returns 0 if tree is NULL or a leaf node.
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

