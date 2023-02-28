#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in binary tree
 * @tree: us a pointer to the root node of the tree to count the
 * number of nodes
 *
 * Return: num of nodes with at least 1 child or 0 if @tree is NULL
 *
 * Description - a NULL pointer is not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0, left, right;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		count++;
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	return (left + right + count);
}
