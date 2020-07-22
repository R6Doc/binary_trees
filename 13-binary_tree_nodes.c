#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes with
 * at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: If tree is NULL, the function must return 0.
 * A NULL pointer is not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t who_is_your_daddy = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		who_is_your_daddy += 1;
	else
		return (0);
	who_is_your_daddy += binary_tree_nodes(tree->left)
		+ binary_tree_nodes(tree->right);
	return (who_is_your_daddy);
}
