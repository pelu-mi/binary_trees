#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a node is a leaf
 * @node: pointer to the node to be checked
 *
 * Return: 1 if node is a leaf, Otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || (!(node->left) && !(node->right))) ? 0 : 1);
}
