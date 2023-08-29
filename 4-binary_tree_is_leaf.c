#include "binary_trees.h"
/**
 * binary_tree_is_leaf - cheks if the node is leaf or not
 * @node: the node to be checked
 * Return: 1 if is leaf, 0 if not
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	
	if (!node->right && !node->left)
		return (1);
	else
		return (0);
}