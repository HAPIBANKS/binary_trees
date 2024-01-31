#include "binary_trees.h"

/**
*binary_tree_height - gets the height of a tree
*@tree: pointer to the tree
*Return: height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0;
	size_t rh = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
	{
		lh = 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		rh = 1 + binary_tree_height(tree->right);
	}
	if (rh > lh)
	{
		return (rh);
	}
	else
	{
		return (lh);
	}
}

