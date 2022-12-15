#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverse a tree using inorder traversal
 * @tree: pointer to the tree
 * @func: pointer to function to be called on each element of a tree
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if tree and func exist */
	if (!tree || !func)
		return;
	if (tree->left)
		binary_tree_inorder(tree->left, func);
	func(tree->n);
	if (tree->right)
		binary_tree_inorder(tree->right, func);
}
