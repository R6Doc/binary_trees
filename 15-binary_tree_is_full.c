#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is a leaf
 * @node: node to check
 * Return: 1 if leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: tree is NULL, your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_left, full_right;

	if (!tree)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);
	full_left = binary_tree_is_full(tree->left);
	full_right = binary_tree_is_full(tree->right);
	if (full_left == 0 || full_right == 0)
		return (0);
	return (1);
}
