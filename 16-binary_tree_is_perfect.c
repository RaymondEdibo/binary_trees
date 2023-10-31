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
		l_height = tree->left ? binary_tree_height(tree->left) + 1 : 0;
		r_height = tree->right ? binary_tree_height(tree->right) + 1 : 0;

		return (MAX(l_height, r_height));
	}

	return (0);
}

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
 * binary_tree_is_perfect - checks if perfect
 *
 * @tree: root node
 *
 * Return: 1 if perfect else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t ht = binary_tree_height(tree) + 1;
	size_t sz = binary_tree_size(tree);
	size_t k = 1;

	if (tree)
	{
		while (ht-- > 0)
			k = k * 2;
		k -= 1;

		if (k == sz)
			return (1);
	}
	return (0);
}
