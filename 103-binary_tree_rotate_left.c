#include "binary_trees.h"

/**
 * binary_tree_rotate_left - left rotation on binary tree
 *
 * @tree: root node
 *
 * Return: pointer to new root node
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree && tree->right)
	{
		tree->parent = tree->right;

		if (tree->right->left)
			tree->right = tree->parent->left;
		else
			tree->right = NULL;

		tree->parent->left = tree;
		tree->parent->parent = NULL;
		return (tree->parent);
	}

	return (NULL);
}
