#include "binary_trees.h"
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = parent->right;
	node->left = NULL;
	parent->right = node;

	// if (node->right)
	// 	node->right->parent = node;

	return (node);
}