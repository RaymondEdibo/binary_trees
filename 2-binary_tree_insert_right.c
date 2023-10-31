#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts right-child node
 *
 * @parent: pointer to parent node
 * @value: new node value
 *
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nd = NULL;

	if (parent)
	{
		nd = binary_tree_nd(parent, value);
		if (nd)
		{
			if (parent->right)
			{
				nd->right = parent->right;
				parent->right->parent = nd;
			}
			parent->right = nd;
		}
	}

	return (nd);
}
