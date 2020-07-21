#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: If tree is NULL, the function must return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	if (tree->left)
		size = 1 + binary_tree_height(tree->left);
	if (tree->right)
		size = 1 + binary_tree_height(tree->right);

	return (size);
}
