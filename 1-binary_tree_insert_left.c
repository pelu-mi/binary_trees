#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert binary tree node to the left child
 * @parent: Pointer to the parent node of the binary tree
 * @value: Value to be stored in the binary tree
 *
 * Return: Pointer to the new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	/* Check if parent exists */
	if (!parent)
		return (NULL);
	/* Check if memory can be allocated */
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	/* Set the values */
	node->parent = parent;
	node->n = value;
	/* Check if parent has existing left-child node */
	if (!(parent->left))
		node->left = NULL;
	else
	{
		node->left = parent->left;
		parent->left = node;
	}
	node->right = NULL;

	return (node);
}
