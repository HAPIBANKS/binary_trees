#include "binary_trees.h"

/**
*binary_tree_leaves - counts the leaves
*@tree: pointer to the tree
*Return: number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);
	return (count);
}
