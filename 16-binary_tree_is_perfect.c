#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left_node;
	binary_tree_t *right_node;
	int left_depth = 0, right_depth = 0;
	int left_full, right_full;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left_node = (binary_tree_t *)tree->left;
	while (left_node != NULL)
	{
		left_depth++;
		left_node = left_node->left;
	}

	right_node = (binary_tree_t *)tree->right;
	while (right_node != NULL)
	{
		right_depth++;
		right_node = right_node->left;
	}

	left_full = binary_tree_is_perfect(tree->left);
	right_full = binary_tree_is_perfect(tree->right);

	if (left_depth == right_depth && left_full && right_full)
		return (1);
	else
		return (0);
}
