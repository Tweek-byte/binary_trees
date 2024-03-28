#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: ptr to uncle or NUll if no unc
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->right && node->parent->parent->left)
	{
		if (node->parent->parent->left == node->parent)
			return (node->parent->parent->right);
		else if (node->parent->parent->right == node->parent)
			return (node->parent->parent->left);
		else
			return (NULL);
	}

	return (NULL);
}
