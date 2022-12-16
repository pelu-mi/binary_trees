#include "binary_trees.h"

/* Helper function */
int _size(const binary_tree_t *tree);
int is_complete(const binary_tree_t *tree, size_t index, size_t size);

/**
 * is_complete - Check if binary tree is complete
 * @tree: pointer to tree root
 * @index: index to be traversed
 * @size: size of binary tree
 *
 * Return: 1 if complete, 0 otherwise
 */
int is_complete(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (is_complete(tree->left, 2 * index + 1, size) &&
		is_complete(tree->right, 2 * index + 2, size));
}


/**
 * _size - Calculate size of a binary tree
 * @tree: pointer to tree root node
 * Return: Size of binary tree
 */
int _size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (_size(tree->left) + _size(tree->right) + 1);
}


/**
 * binary_tree_is_complete - Check if a binary tree is complete
 * @tree: pointer to the tree root
 * Return: 1 if yes, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int size;

	/* Check if tree exists */
	if (!tree)
		return (0);
	size = _size(tree);
	return (is_complete(tree, 0, size));
}
