#include "binary_trees.h"

/**
 * binary_tree_leaves - Calculate the leaves of the tree
 * @tree: pointer to the tree root
 * Return: number of leaves of the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;
	/* Check if tree and func exist */
	if (!tree)
		return (0);
	/* Traverse the tree and count */
	if (!(tree->left) && !(tree->right))
		leaves += 1;
	if (tree->left)
		leaves += binary_tree_leaves(tree->left);
	if (tree->right)
		leaves += binary_tree_leaves(tree->right);
	return (leaves);
}
