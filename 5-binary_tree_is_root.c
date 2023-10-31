#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if root?
 * @node: pointer to node
 * Return: 0 if not or 1 if it is root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
