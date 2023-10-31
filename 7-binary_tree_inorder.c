#include "binary_trees.h"

/**
 * binary_tree_inorder - in-order traversal through binary tree
 *
 * @tree: root node
 * @func: function to call each node
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (tree->left)
			binary_tree_inorder(tree->left, func);
		func(tree->n);
		if (tree->right)
			binary_tree_inorder(tree->right, func);
	}
}
