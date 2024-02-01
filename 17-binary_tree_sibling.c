#include "binary_trees.h"

/**
*binary_tree_sibling- checks for the sibling of a node
*@node: a pointer to the node to find its sibling
*Return: sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	if (node == parent->left)
		return (parent->right);
	if (node == parent->right)
		return (parent->left);
}
