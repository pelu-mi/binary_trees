#include "binary_trees.h"

/* Helper Function */
int _is_full(const binary_tree_t *tree);

/**
 * binary_tree_is_full - Check if the tree is full
 * @tree: pointer to the tree root
 * Return: 1 if tree is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* Check if tree exists */
	if (!tree)
		return (0);
	return ((_is_full(tree) > 0) ? 0 : 1);
}

/*
 * _is_full - Check and count number of nodes with one child
 * @tree: pointer to tree root
 * Return: Number of nodes with 1 child
 */
int _is_full(const binary_tree_t *tree)
{
	int full = 0;

	/* Add 1 if any node exists with one child */
	if (!((tree->left && tree->right) || (!(tree->left) && !(tree->right))))
		full += 1;
	/* Traverse the tree and count */
	if (tree->left)
		full += _is_full(tree->left);
	if (tree->right)
		full += _is_full(tree->right);
	return (full);
}
