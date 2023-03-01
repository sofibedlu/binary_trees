#include "binary_trees.h"

/**
 * binary_tree_sibling - finds siblings of a @node
 * @node: is a pointer to the node to find the sibling
 * Return: if @node is NULL or the parent is, return NULL.
 * if the @node has no sibling, return NULL otherwise return
 * pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent, *sibling;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	/*
	 * if (node->parent == NULL)
		return (NULL);
	*/
	parent = node->parent;
	if (parent->left != NULL && parent->right != NULL)
	{
		if (parent->left == node)
			sibling = parent->right;
		else
			sibling = parent->left;
		return (sibling);
	}
	return (NULL);
}
