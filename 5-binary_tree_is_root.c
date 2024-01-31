#include "binary_trees.h"

/**
*binary_tree_is_root - checks if a node is the root
*@node: pointer to the node to check
*
*Return: 1
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
	{
		return (1);
	}
	/*return (1);*/
}
