#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_right, h_left;

	if (tree == NULL)
		return (0);

	if (tree->right != NULL)
	{
		h_right = binary_tree_height(tree->right);
		h_left = binary_tree_height(tree->left);
		return ((h_left > h_right ? h_left : h_right) + 1);
	}
	return (0);
}
