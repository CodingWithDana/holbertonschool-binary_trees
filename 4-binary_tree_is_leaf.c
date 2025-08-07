#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: a pointer pointing to the node to check
 * Return: 1 if the node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* When node is not a LEAF, function returns 0 */
	if (node == NULL)
		return (0);

	/* When node is a LEAF, function returns 1 */
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
