#include "binary_trees.h"
/**
 * binary_tree_depth - measure the depth of a node
 * @tree: a pointer to the node
 * Return: the depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (depth);
}
