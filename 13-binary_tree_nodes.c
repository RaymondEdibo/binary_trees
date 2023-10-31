13-binary_tree_nodes.c#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child
 *
 * @tree: root node
 * Return: 0 if NULL else no. of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
	else
		return (0);
}
