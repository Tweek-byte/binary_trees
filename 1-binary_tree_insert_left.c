#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent:  pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer created node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_b_node;

	if (parent == NULL)
		return (NULL);

	new_b_node = malloc(sizeof(binary_tree_t));
	if (new_b_node == NULL)
		return (NULL);

	new_b_node->n = value;
	new_b_node->parent = parent;
	new_b_node->left = NULL;
	new_b_node->right = NULL;

	if (parent->left)
	{
		new_b_node->left = parent->left;
		parent->left->parent = new_b_node;
	}
	parent->left = new_b_node;

	return (new_b_node);
}
