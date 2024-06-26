#include "binary_trees.h"

/**
 * binary_tree_size -  measures the size of a binary tree.
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: tree is NULL,must return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t t = 0;

	if (!tree)
		return (0);

	t += binary_tree_size(tree->left);
	t += binary_tree_size(tree->right);
	t++;

	return (t);
}
