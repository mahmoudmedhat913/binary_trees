#include "binary_trees.h"

/**
 * binary_tree_is_leaf - know if node is leaf
 * @node: node
 * Return: 1 if true or 0 if false
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
