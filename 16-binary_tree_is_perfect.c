#include "binary_trees.h"

int power(int b, int exp);
int binary_num_node(const binary_tree_t *tree);
int binary_height(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 1 if true, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h, size;

	if (tree == NULL)
		return (0);
	h = binary_height(tree);
	size = binary_num_node(tree);
	if (size == power(2, (h + 1)) - 1)
		return (1);
	return (0);
}

/**
 * power - calculate the @exp of @b;
 * @exp: exponent;
 * @b: base;
 * Return: @exp of @b
 */
int power(int b, int exp)
{
	int i, result = 1;

	for (i = 0; i < exp; i++)
		result *= b;
	return (result);
}

/**
 * binary_height - calculate height of the tree
 * @tree: is a pointer to the root node of the tree
 * Return: height of the tree
 */
int binary_height(const binary_tree_t *tree)
{
	int left, right, height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left = 1 + binary_height(tree->left);
	right = 1 + binary_height(tree->right);
	if (left > right)
		height = left;
	else
		height = right;
	return (height);
}

/**
 * binary_num_node - calculate number of node
 * @tree: is a pointer to the node of the tree
 * Return: number of nodes
 */
int binary_num_node(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = binary_num_node(tree->left);
	right = binary_num_node(tree->right);
	return (left + right + 1);
}
