#include "binary_trees.h"

/**
 * binary_tree_sibling - Return node sibling
 * @node: Pointer to the node of the binary tree
 * Return: Pointer to the new node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Check if node exists */
	if (!node || !(node->parent))
		return (NULL);
	/* Check if node is left-child node or right-child and return sib */
	if ((node->parent->left) == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
