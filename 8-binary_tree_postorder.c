#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse a tree using postorder traversal
 * @tree: pointer to the tree
 * @func: pointer to function to be called on each element of a tree
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
{
	/* Check if tree and func exist */
	if (!tree || !func)
		return;
	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);
	func(tree->n);
}
