#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through tree in-order
 * @tree: pointer to the node
 * @func: pointer to func
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}