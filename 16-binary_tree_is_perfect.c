#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise or if tree is NULL
 *
 * Description:
 *   A perfect binary tree is one where all internal nodes have two children
 *   and all leaves are at the same depth. This function recursively checks
 *   whether the tree satisfies these conditions.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_full = 0, right_full = 0;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) || (tree->right == NULL))
		return (0);

	if (tree->left != NULL && tree->right != NULL)
		return (1);

	left_full = binary_tree_is_perfect(tree->left);
	right_full = binary_tree_is_perfect(tree->right);

	if (left_full == right_full)
		return (1);
	else
		return (0);
}
