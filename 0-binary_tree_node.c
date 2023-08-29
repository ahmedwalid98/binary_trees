#include "binary_trees.h"
/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: a parent of created node
 * @value: the value to be assigned to the node
 * Return: a pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
