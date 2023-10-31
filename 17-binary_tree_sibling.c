#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling node
 *
 * @node: the node
 * Return:  NULL if NULL else pointer of the sibling of the node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->right && node->parent->left)
		return (node->parent->left);
	else if (node == node->parent->left && node->parent->right)
		return (node->parent->right);
	else
		return (NULL);
}
