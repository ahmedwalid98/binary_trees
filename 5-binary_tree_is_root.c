#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if the given node is root
 * @node: the node to be checked
 * Return: 1 if it is, 0 if not
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);
	else
		return (0);
}
