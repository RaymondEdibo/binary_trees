#include "binary_trees.h"

/**
 * binary_tree_rotate_right - right rotation on binary tree
 *
 * @tree: root node
 * Return: pointer to the new root node
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	if (tree && tree->left)
	{
		tree->parent = tree->left;

		if (tree->left->right)
		{
			tree->left = tree->parent->right;
			tree->left->parent = tree;
		}
		else
			tree->left = NULL;

		tree->parent->right = tree;
		tree->parent->parent = NULL;
		return (tree->parent);
	}

	return (NULL);
}
