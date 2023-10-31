#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle node
 *
 * @node: the node
 *
 * Return: pointer to uncle node, else NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *left_unc = NULL, *right_unc = NULL;

	if (node && node->parent && node->parent->parent)
	{
		left_unc = node->parent->parent->left;
		if (left_unc && left_unc != node->parent)
			return (node->parent->parent->left);

		right_unc = node->parent->parent->right;
		if (right_unc && right_unc != node->parent)
			return (node->parent->parent->right);
	}

	return (NULL);
}
