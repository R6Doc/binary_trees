#include "binary_trees.h"
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

	if (tree->left)
		height_left = 1 + binary_tree_balance(tree->left);
	if (tree->right)
		height_right = 1 + binary_tree_balance(tree->right);

	return (height_left - height_right);
}
