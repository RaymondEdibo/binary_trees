#include "binary_trees.h"

/**
 * binary_tree_depth - depth of node in binary tree
 *
 * @tree: the node
 *
 * Return: depth else 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deep = 0;

	if (tree)
	{
		while (tree->parent)
		{
			deep++;
			tree = tree->parent;
		}
	}

	return (deep);
}
