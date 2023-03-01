#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of the @node
 * @node: is a pointer to the node to find the uncle
 * Return: pointer to the @node uncle, otherwise NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle, *parent, *ancestor;

	if (node == NULL)
		return (NULL);
	parent = node->parent;
	if (parent != NULL && parent->parent != NULL)
	{
		ancestor = parent->parent;
		if (parent == ancestor->left)
			uncle = ancestor->right;
		else
			uncle = ancestor->left;
		return (uncle);
	}
	return (NULL);
}
