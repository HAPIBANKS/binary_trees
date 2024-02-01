#include "binary_trees.h"

/**
*d_depth - checks the size of left and right nodes
*@tree: pointer to the root node
*Return: size
*/
int d_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (d_depth(tree->left) + d_depth(tree->right) + 1);
}


/**
*binary_tree_is_perfect - checks if a binary tree is perfect
*@tree: pointer to the root node
*Return: zero(0)
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lh = 0;
	int rh = 0;

	if (tree == NULL)
		return (0);
	if (tree && (tree->left == NULL && tree->right == NULL))
		return (1);

	lh = d_depth(tree->left);
	rh = d_depth(tree->right);

	if ((lh - rh) == 0)
		return (1);

	return (0);
}
