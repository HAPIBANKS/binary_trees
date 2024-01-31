#include "binary_trees.h"

/**
*binary_tree_delete - deletes a binary tree
*@tree: pointer to the binary tree
*Return: void
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (NULL);
	}
	else
	{
		free(tree);
	}
}
