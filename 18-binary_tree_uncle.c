#include "binary_trees.h"

/**
 *_uncle - look for the uncle of a given node
 *@node: pointer to the  node to search its uncle
 *Return: the uncle
 */
binary_tree_t *_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	grandparent = node->parent;

	if (grandparent->left && (grandparent->left != node))
		return (grandparent->left);
	else if (grandparent->right && (grandparent->right != node))
		return (grandparent->right);
	return (NULL);
}

/**
 * binary_tree_uncle - gets the uncle of a given node
 * @node: pointer to the node to look for its uncle
 * Return: the uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	return (_uncle(node->parent));
}
