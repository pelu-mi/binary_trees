#include "binary_trees.h"

/**
 * binary_tree_is_bst - Check if binary tree is bstree
 * @tree: Pointer to root node
 * Return: 1 if true, else 0
 */
int binary_tree_is_bst(const binary_tree_t *tree);
{
	if (!tree)
		return (0);
	else
		return (1);
}
