#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node
 * @parent: Pointer to the parent node of the binary tree
 * @value: Value to be stored in the binary tree
 *
 * Return: Pointer to the new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	/* Check if memory can be allocated */
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	/* Set the values */
	if (!parent)
		node->parent = NULL;
	else
		node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
