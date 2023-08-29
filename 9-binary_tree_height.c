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
	int count_right, count_left;
	const binary_tree_t *origin_tree;

	origin_tree = tree;
	if (tree == NULL)
		return (0);

	count_left = 0;
	while (tree->left != NULL)
	{
		tree = tree->left;
		count_left++;
	}

	tree = origin_tree;
	count_right = 0;
	while (tree->right != NULL)
	{
		tree = tree->right;
		count_right++;
	}
return (count_left > count_right ? count_left : count_right);
}
