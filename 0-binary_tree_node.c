#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 *
 * Return:  pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_b_node = malloc(sizeof(binary_tree_t));

	if (new_b_node == NULL)
	{
		free(new_b_node);
		return (NULL);
	}

	new_b_node->n = value;
	new_b_node->left = NULL;
	new_b_node->right = NULL;
	new_b_node->parent = parent;

	if (parent)
	{
		if (!parent->left)
			parent->left = new_b_node;
		else if (!parent->right)
			parent->right = new_b_node;
		else
			return (NULL);
	}

	return (new_b_node);
}
