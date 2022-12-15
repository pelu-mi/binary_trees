#include "binary_trees.h"

/* Helper function */
int _height(const binary_tree_t *tree);

/**
 * _height - Calculate the height of a binary tree
 * @tree: pointer to the tree
 * Return: Height of the tree
 */
int _height(const binary_tree_t *tree)
{
	int h_l = 0, h_r = 0;

	/* Check if tree exists */
	if (!tree)
		return (0);
	/* Recursively check for the largest tree from the root */
	h_l = tree->left ? 1 + _height(tree->left) : 1;
	h_r = tree->right ? 1 + _height(tree->right) : 1;
	/* Return the largest height */
	return (h_l > h_r ? h_l : h_r);
}

/**
 * binary_tree_balance - Calculate the balance factor of the tree
 * @tree: pointer to the tree root
 * Return: number of nodes of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	/* Check if tree and func exist */
	if (!tree)
		return (0);
	/* Check for the left and right max levels in the tree */
	left = _height(tree->left);
	right = _height(tree->right);
	return (left - right);
}
