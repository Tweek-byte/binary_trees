#include "binary_trees.h"

/**
 * binary_tree_insert_right -  inserts a node as the right-child of another node
 * @parent: s a pointer to the node to insert the right-child
 * @value: value to store in the new node
 *
 * Return:  pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right)
	{
		new_b_node->right = parent->right;
		parent->right->parent = new_b_node;
	}
	parent->right = new_b_node;

	return (new_b_node);
}
