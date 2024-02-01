#include "binary_trees.h"

/**
*binary_tree_height - compute the height of a tree
*@tree: pointer to the root node
*Return: height
*/
size_t binary_tree_height_balance(const binary_tree_t *tree)
{
	size_t lh = 0;
	size_t rh = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		lh = 1 + binary_tree_height_balance(tree->left);
	if (tree->right)
		rh = 1 + binary_tree_height_balance(tree->right);
	if (rh > lh)
		return (rh);
	return (lh);
}


/**
*binary_tree_balance - measures the balance of a binary tree
*@tree: pointer to the root node of the tree to measure
*
*Return:the balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lh = 0;
	size_t rh = 0;
	size_t balance;


	if (tree == NULL)
		return (0);
	if (tree->left)
		lh = 1 + binary_tree_height_balance(tree->left);
	if (tree->right)
		rh = 1 + binary_tree_height_balance(tree->right);
	balance = lh - rh;
	return (balance);
}
