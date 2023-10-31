#include "binary_trees.h"

/**
 * binary_trees_ancestor - find lowest common ancestor
 *
 * @first: the first node
 * @second: the second node
 * Return: a pointer to the lowest common ancestor else NULL
 */

binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *one = NULL, *two = NULL;

	if (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);

		one = first->parent;
		two = second->parent;

		if (!one || first == two || (!one->parent && two))
			return (binary_trees_ancestor(first, two));
		if (!two || second == one || (!two->parent && one))
			return (binary_trees_ancestor(one, second));
		return (binary_trees_ancestor(one, two));
	}

	return (NULL);
}
