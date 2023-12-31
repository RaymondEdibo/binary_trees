#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in binary tree
 *
 * @tree: root node 
 *
 * Return: no. of leaves else 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);
		else
			return (binary_tree_leaves(tree->left)
					+ binary_tree_leaves(tree->right));
	}

	return (0);
}
