#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of BT
 * @tree: pointer to the node of the BT
 * Return: height of the BT
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left > right ? left : right);
}