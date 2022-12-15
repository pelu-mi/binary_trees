#include "binary_trees.h"

/**
 * binary_tree_depth - Calculate the depth of a binary tree node
 * @tree: pointer to the tree node
 * Return: depth of the tree node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	/* Check if tree exists */
	if (!tree)
		return (0);
	/* Recursively check for the tree root from the node */
	while (tree)
	{
		if (!(tree->parent))
			break;
		depth += 1;
		tree = tree->parent;
	}
	return (depth);
}
