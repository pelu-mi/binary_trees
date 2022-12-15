#include "binary_trees.h"

/**
 * binary_tree_uncle - Return node uncle
 * @node: Pointer to the node of the binary tree
 * Return: Pointer to the uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* Check if node exists */
	if (!node || !(node->parent) ||  !(node->parent->parent))
		return (NULL);
	/* Check if parent is left-child node or right-child and return sib */
	if ((node->parent->parent->left) == node->parent)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
