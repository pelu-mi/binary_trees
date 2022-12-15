#include "binary_trees.h"

/* Helper function */
void level_order(const binary_tree_t *tree, int level, void (*func)(int));
int _depth(const binary_tree_t *tree);
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
 * level_order - recursively traverse the tree and call func for each level
 * @tree: pointer to the tree node
 * @level: Level of tree to be executed
 * @func: Function to call on each element
 */
void level_order(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree)
		return;
	if (_depth(tree) == level)
		func(tree->n);
	level_order(tree->left, level, func);
	level_order(tree->right, level, func);
}

/**
 * binary_tree_levelorder - Traverse a tree using level order traversal
 * @tree: pointer to the tree
 * @func: pointer to function to be called on each element of a tree
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int i, h;

	/* Check if tree and func exist */
	if (!tree || !func)
		return;
	h = _height(tree);
	for (i = 0; i < h; i++)
	{
		level_order(tree, i, func);
	}
}
