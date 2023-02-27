#ifndef BINARY_TREES
#define BINARY_TREES

#include <stddef.h>
#include <stdlib.h>

/**
 * struct binary_trees_s - Binary tree node
 *
 * @n: integer stored in the node
 * @parent: pointer to the parent node
 * @left: pointer to the left child node
 * @right: pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);



void binary_tree_print(const binary_tree_t *);

#endif /*_BINARY_TREES_H_ */
