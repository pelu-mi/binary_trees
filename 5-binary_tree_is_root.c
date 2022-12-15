#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a node is a root
 * @node: pointer to the node to be checked
 *
 * Return: 1 if node is a root, Otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((node && node->parent) ? 1 : 0);
}
