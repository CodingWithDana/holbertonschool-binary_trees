#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: pointer to the sibling node,
 * otherwise NULL if no sibling or invalid input
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	/* If node is NULL or has no parent, no sibling exists */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* Access the parent pointer inside the node struct */
	/* then store that pointer into the local variable parent */
	parent = node->parent;
	/* Check if node is left child and if right sibling exists */
	if (parent->left == node && parent->right != NULL)
		return (parent->right);
	/* Check if node is right child and if left sibling exists */
	if (parent->right == node && parent->left != NULL)
		return (parent->left);
	/* If no sibling found, return NULL */
	return (NULL);
}
