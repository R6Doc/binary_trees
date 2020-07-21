#include "binary_trees.h"
/**
 * binary_tree_is_root - check if node is root
 * @node:Pointer to the node to check
 * Return: if is root return 1, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{

	if (node != NULL && node->parent == NULL)
		return (1);
	return (0);
}
