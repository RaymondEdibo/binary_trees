#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts right-child node
 *
 * @parent: pointer to parent node
 * @value: new value
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nd = NULL;

	if (parent)
	{
		nd = binary_tree_nd(parent, value);
		if (nd)
		{
			if (parent->left)
			{
				nd->left = parent->left;
				parent->left->parent = nd;
			}
			parent->left = nd;
		}
	}

	return (nd);
}
