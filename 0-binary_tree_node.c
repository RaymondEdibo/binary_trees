#include "binary_trees.h"

/**
 * binary_tree_node - creates binary tree node
 *
 * @parent: pointer to parent node
 * @value: new value
 *
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nd = NULL;

	nd = malloc(sizeof(binary_tree_t));
	if (nd)
	{
		nd->n = value;
		nd->parent = parent;
		nd->left = NULL;
		nd->right = NULL;
	}

	return (nd);
}
