#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary node
 * @parent: node parent
 * @value: Value of the node
 * Return: the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_BT_node;

	new_BT_node = malloc(sizeof(binary_tree_t));
	if (new_BT_node == NULL)
		return (NULL);

	new_BT_node->n = value;
	new_BT_node->parent = parent;
	new_BT_node->left = NULL;
	new_BT_node->right = NULL;
	return (new_BT_node);
}
