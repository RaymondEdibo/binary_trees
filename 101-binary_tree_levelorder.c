#include "binary_trees.h"

/**
 * binary_tree_height - the height 
 *
 * @tree: the root node
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
 * binary_tree_flevel - apply function
 *
 * @tree: the root node
 * @func: function to call each node
 * @l: level of tree to apply function
 */

void binary_tree_flevel(const binary_tree_t *tree, void (*func)(int), size_t l)
{
	if (tree)
	{
		if (l == 1)
			func(tree->n);
		else if (l > 1)
		{
			binary_tree_flevel(tree->left, func, l - 1);
			binary_tree_flevel(tree->right, func, l - 1);
		}
	}
}

/**
 * binary_tree_levelorder - levelorder traversal through binary tree
 *
 * @tree: the root node
 * @func: function to call each node
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t h = binary_tree_height(tree);
	size_t i = 1;

	if (tree && func)
	{
		while (i <= h)
			binary_tree_flevel(tree, func, i++);
	}
}
