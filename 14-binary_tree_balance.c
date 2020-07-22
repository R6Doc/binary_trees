#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: tree is NULL, your function must return 0, otherwise tree's height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (!tree)
		return (0);

	height_left = 1 + binary_tree_height(tree->left);
	height_right = 1 + binary_tree_height(tree->right);

	if (height_left > height_right)
		return (height_left);
	return (height_right);
}

/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: tree is NULL, your function must return 0, otherwise tree's balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;


	if (!tree)
		return (0);

	height_left = binary_tree_height(tree->left) + 1;
	height_right = binary_tree_height(tree->right) + 1;

	return (height_left - height_right);
}
