#include "binary_trees.h"

/**
 * binary_tree_height - height
 *
 * @tree: root node
 *
 * Return: height else 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0;
	size_t r_height = 0;

	if (tree)
	{
		l_height = tree->left ? binary_tree_height(tree->left) + 1 : 1;
		r_height = tree->right ? binary_tree_height(tree->right) + 1 : 1;

		return (MAX(l_height, r_height));
	}

	return (0);
}

/**
 * binary_tree_balance - balance factor
 *
 * @tree: root node
 *
 * Return: balance factor else 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left)
				- binary_tree_height(tree->right));
	}

	return (0);
}
