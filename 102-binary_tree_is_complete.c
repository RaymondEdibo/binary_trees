#include "binary_trees.h"

/**
 * binary_tree_size - size of a binary tree
 *
 * @tree: root node
 *
 * Return: size else 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_size(tree->left)
				+ binary_tree_size(tree->right) + 1);
	}

	return (0);
}

/**
 * binary_tree_complete - recursive function
 *
 * @tree: root node
 * @count: no. of nodes
 * @index: no. to compare
 *
 * Return: 1 if complete else 0
 */

int binary_tree_complete(const binary_tree_t *tree, size_t count, size_t index)
{
	if (tree)
	{
		if (index >= count)
			return (0);
		return (binary_tree_complete(tree->left, count, 2 * index + 1)
				&& binary_tree_complete(tree->right, count, 2 * index + 2));
	}

	return (1);
}

/**
 * binary_tree_is_complete - check if complete
 *
 * @tree: root node
 *
 * Return: 1 if complete else 0
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t num = binary_tree_size(tree);
	size_t x = 0;

	if (tree)
		return (binary_tree_complete(tree, num, x));

	return (0);
}
