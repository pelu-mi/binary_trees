#include "binary_trees.h"

/**
 * binary_tree_height - Calculate the height of a binary tree
 * @tree: pointer to the tree
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	/* Check if tree exists */
	if (!tree)
		return (0);
	/* Recursively check for the largest tree from the root */
	h_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	h_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	/* Return the largest height */
	return (h_left > h_right ? h_left : h_right);
}
