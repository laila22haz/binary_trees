#include "binary_trees.h"
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
	size_t h_right = 0, h_left = 0;

	if (tree == NULL)
		return (0);

	if (tree != NULL)
	{
		h_left = tree->left ? binary_tree_height(tree->left) + 1 : h_left;
		h_right = tree->right ? binary_tree_height(tree->right) + 1 : h_right;
		return (h_left > h_right ? h_left : h_right);
	}
	return (0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t hight_right, hight_left;
	int perfect_left, perfect_right;

	if (tree == NULL)
		return (0);

	hight_left = binary_tree_height(tree->left);
	hight_right = binary_tree_height(tree->right);
	perfect_left = binary_tree_is_perfect(tree->left);
	perfect_right = binary_tree_is_perfect(tree->right);

	if (hight_left == hight_right)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		return (perfect_left && perfect_right);
	}
	else
		return (0);
}
