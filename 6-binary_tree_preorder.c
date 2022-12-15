#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse a tree using preorder traversal
 * @tree: pointer to the tree
 * @func: pointer to function to be called on each element of a tree
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if tree and func exist */
	if (!tree || !func)
		return;
	func(tree->n);
	if (tree->left)
		binary_tree_preorder(tree->left, func);
	if (tree->right)
		binary_tree_preorder(tree->right, func);
}
