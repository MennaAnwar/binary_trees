#include "binary_trees.h"

/**
 * BST_check - Compare node in order to check if a given
 *
 * @tree: pointer to the root node of the tree to check
 * @min: min value
 * @max: max value
 *
 * Return: 1 if success, 0 otherwise
 */
int BST_check(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (
		BST_check(tree->left, min, tree->n - 1) &&
		BST_check(tree->right, tree->n + 1, max)
	);
}

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid BST
 *	   0 if its not a BST or tree is NULL
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (BST_check(tree, INT_MIN, INT_MAX));
}
