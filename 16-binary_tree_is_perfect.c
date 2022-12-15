#include "binary_trees.h"

/* Helper Function */
int count_nodes(const binary_tree_t *tree);

/**
 * count_nodes - Count the total number of nodes
 * @tree: pointer to tree root
 * Return: Number of nodes with 1 child
 */
int count_nodes(const binary_tree_t *tree)
{
	int size = 0;

	/* Traverse the tree and count each element */
	size += 1;
	if (tree->left)
		size += count_nodes(tree->left);
	if (tree->right)
		size += count_nodes(tree->right);
	return (size);
}

/**
 * binary_tree_is_full - Check if the tree is full
 * @tree: pointer to the tree root
 * Return: 1 if tree is full, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/* Check if tree exists */
	if (!tree)
		return (0);
	/* Check if total nodes = 2^h - 1 by checking if its a power of 2*/
	int p = count_nodes(tree);
	if ((p & (p + 1)) == 0)
		return (1);
	else
		return (0);
}
