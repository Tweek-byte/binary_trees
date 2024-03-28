#include "binary_trees.h"

/**
 * binary_tree_is_perfect -  checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;

	if (tree == NULL || !tree->left || !tree->right)
		return (0);

	if (tree)
	{
		if (tree->left)
			l =  binary_tree_is_perfect(tree->left) + 1;
		if (tree->right)
			r = binary_tree_is_perfect(tree->right) + 1;
		return ((l == r) ? 1 : 0);
	}

	return (0);
}
