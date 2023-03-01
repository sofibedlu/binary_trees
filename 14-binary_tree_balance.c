#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the
 * balance factor
 *
 * Return: balance factor of the tree or 0 if the @tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right, count_l = 0, count_r = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->left != NULL)
		count_l++;
	if (tree->right != NULL)
		count_r++;
	left = count_l + binary_tree_balance(tree->left);
	right = count_r + binary_tree_balance(tree->right);
	return (left - right);
}
