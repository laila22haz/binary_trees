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
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;
	size_t right, left;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	balance = left - right;
	return (balance);
}

