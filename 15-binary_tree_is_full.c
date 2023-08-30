#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * If tree is NULL, return 0.
 * Return: 1 if full or 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_balance, right_balance;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_balance = binary_tree_height(tree->left);
	right_balance = binary_tree_height(tree->right);

	if (left_balance == right_balance)
		return (1);
	return (0);
}


/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure.
 * Return: The height of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height < right_height)
		return (left_height + 1);
	return (right_height + 1);
}
