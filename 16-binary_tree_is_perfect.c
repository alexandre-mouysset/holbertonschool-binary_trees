#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_full = 0;
	int right_full = 0;

	if (tree != NULL && tree->parent == NULL &&
		tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	left_full = binary_tree_is_perfect(tree->left);
	right_full = binary_tree_is_perfect(tree->right);

	if (left_full == right_full)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
