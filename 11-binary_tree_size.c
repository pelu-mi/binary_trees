#include "binary_trees.h"

/**
 * binary_tree_size - Calculate the size of the tree
 * @tree: pointer to the tree root
 * Return: Size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;
	/* Check if tree and func exist */
	if (!tree)
		return (0);
	/* Traverse the tree and count each element */
	size += 1;
	if (tree->left)
		size += binary_tree_size(tree->left);
	if (tree->right)
		size += binary_tree_size(tree->right);
	return (size);
}
