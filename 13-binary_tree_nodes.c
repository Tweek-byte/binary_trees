#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in tree
 * @tree:  pointer to the root node of the tree to count nodes
 *
 * Return: If tree is NULL, return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree)
	{
		if (tree->left || tree->right)
			n++;
		n += binary_tree_n(tree->left);
		n += binary_tree_n(tree->right);
	}
	return (n);
}
