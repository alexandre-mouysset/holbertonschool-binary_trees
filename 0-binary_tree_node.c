#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: Pointer to the parent node, or NULL if root
 * @value: Value to store in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 *
 * Description:
 *   Allocates memory for a new node of a binary tree, sets its value and
 *   parent pointer, and initializes left and right child pointers to NULL.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);

}
