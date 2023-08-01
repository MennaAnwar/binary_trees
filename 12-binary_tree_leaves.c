#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0, left = 0, right = 0;

	if (tree)
	{
		left = binary_tree_leaves(tree->left);
		right = binary_tree_leaves(tree->right);
		leaves = left + right;

		if (!tree->left && !tree->right)
			leaves += 1;
	}
	return (leaves);
}
