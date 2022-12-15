#include "binary_trees.h"

/**
 * binary_tree_nodes - Calculate the nodes of the tree
 * @tree: pointer to the tree root
 * Return: number of nodes of the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;
	/* Check if tree and func exist */
	if (!tree)
		return (0);
	/* Check if node has children */
	if (tree->left || tree->right)
		nodes += 1;
	/* Traverse the tree and count */
	if (tree->left)
		nodes += binary_tree_nodes(tree->left);
	if (tree->right)
		nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
