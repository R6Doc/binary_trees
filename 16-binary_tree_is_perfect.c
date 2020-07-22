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
 
    if (tree->left)
        height_left = 1 + binary_tree_height(tree->left);
    if (tree->right)
        height_right = 1 + binary_tree_height(tree->right);
 
    if (height_left > height_right)
        return (height_left);
    return (height_right);
}
 
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    binary_tree_t *height_left, *height_right;
	if (tree == NULL)
		return (0);

	height_left = tree->left;
	height_right = tree->right;

	if (binary_tree_is_leaf(tree))
		return (1);

	if (height_left == NULL || height_right == NULL)
		return (0);

	if (binary_tree_height(height_left) == binary_tree_height(height_right))
	{
		if (binary_tree_is_perfect(height_left) && binary_tree_is_perfect(height_right))
			return (1);
	}
	return (0);
}
