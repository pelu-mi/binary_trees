#include "binary_trees.h"

/* Helper Function */
int _depth(const binary_tree_t *tree);

/**
 * _depth - Calculate the depth of a binary tree node
 * @tree: pointer to the tree node
 * Return: depth of the tree node
 */
int _depth(const binary_tree_t *tree)
{
	int depth = 0;

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

/**
 * binary_trees_ancestor - Find common ancestor of 2 nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: Pointer to the common ancestor or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	int depth_f, depth_s;

	/* Check if nodes exist */
	if (!first || !second)
		return (NULL);
	depth_f = _depth(first);
	depth_s = _depth(second);
	while (depth_f > depth_s)
	{
		first = first->parent;
		depth_f--;
	}
	while (depth_s > depth_f)
	{
		second = second->parent;
		depth_s--;
	}
	/* Check for their parents */
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return (NULL);
}
