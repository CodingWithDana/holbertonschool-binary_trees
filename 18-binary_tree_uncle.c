#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return: pointer to the uncle node
 * otherwise NULL if no uncle or invalid input
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grandparent;

	/* If node is NULL or has no parent, it cannot have an uncle */
	if (node == NULL || node->parent == NULL)
		return (NULL);
	/* Get and save the parent of the node */
	parent = node->parent;

	/* If parent has no parent, then node has no grandparent and no uncle */
	if (parent->parent == NULL)
		return (NULL);
	/* Get and save the grandparent of the node */
	grandparent = parent->parent;
	/* If parent is the left child of grandparent,*/
	/*	uncle is grandparent's right child */
	if (grandparent->left == parent)
		return (grandparent->right);
	/* If parent is the right child of grandparent,*/
	/*	uncle is grandparent's left child */
	if (grandparent->right == parent)
		return (grandparent->left);

	/* No uncle found */
	return (NULL);
}
