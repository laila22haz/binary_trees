#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right-child of a node.
 *
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the created node, NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tree = NULL;
	binary_tree_t *temp = NULL;

	tree = malloc(sizeof(binary_tree_t));
	if (tree == NULL)
		return (NULL);
	tree->left = tree->right = NULL;
	tree->n = value;
	tree->parent = parent;

	if (parent == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = tree;
		tree->right = temp;
		temp->parent = tree;
	}
	else
		parent->right = tree;
return (tree);
}
