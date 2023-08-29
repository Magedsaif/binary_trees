#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that checks if a given node is a root
 * @node: a pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
 * If node is NULL, return 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	binary_tree_is_root(node->left);
	binary_tree_is_root(node->right);
	if (node->left != NULL && node->right != NULL || node->parent)
		return (1);
	return (0);
}
