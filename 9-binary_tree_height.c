#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: height of the tree or 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h, height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_h = 1 + binary_tree_height(tree->left);
	right_h = 1 + binary_tree_height(tree->right);
	if (left_h > right_h)
		height = left_h;
	else
		height = right_h;
	return (height);
}
