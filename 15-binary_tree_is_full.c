#include "binary_trees.h"

/**
 * binary_tree_is_full - check if full
 * @tree: root node
 * Return: 0 if not full else 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int x = 0;
	int y = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	x = binary_tree_is_full(tree->left);
	y = binary_tree_is_full(tree->right);

	if (x && y)
		return (1);

	return (0);
}
