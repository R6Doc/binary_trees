#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the
 * left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: value to put in the new node
 * Return: a pointer to the created node, or NULL on
 * failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = binary_tree_node(parent, value);
	if (!node || !parent)
		return (NULL);

	/*Point to whatever the parent is point to*/
	/*can be either another node or NULL*/
	node->left = parent->left;
	/*Make the parent left point to the new node*/
	parent->left = node;
	/*Make the node point to its parent*/
	node->parent = parent;

	/*Ask if the new node if pointing to something different to NULL*/
	/*If not and there is a node, and it makes it point back to the new node*/
	if (node->left)
		node->left->parent = node;

	return (node);
}
