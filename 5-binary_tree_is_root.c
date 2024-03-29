#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is root
 * @node: node
 * Return: 1 if true or 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
