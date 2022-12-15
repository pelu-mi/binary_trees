#include "binary_trees.h"

/**
 * binary_tree_delete - Delete a binary tree
 * @tree: pointer to the root node to be deleted
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree->left == NULL && tree->right == NULL)
	{
		free(tree);
		return;
	}
	if (!(tree->left))
		binary_tree_delete(tree->left);
	if (!(tree->right))
		binary_tree_delete(tree->right);
	free(tree);
}
