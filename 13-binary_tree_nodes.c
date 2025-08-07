#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_nodes - count the nodes with at least one child
 * @tree: a pointer to the root node of the tree to count nodes
 * Return: number of nodes with at least one child, otherwise 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* Number of nodes in the left subtree */
	size_t left_count;
	/* Number of nodes in the right subtree */
	size_t right_count;
	/* Total nodes with at least 1 child */
	size_t total_count;

	/* If the tree is NULL, return 0 (no nodes to count) */
	if (tree == NULL)
		return (0);

	/* Recursively count nodes in the left subtree */
	left_count = binary_tree_nodes(tree->left);
	/* Recursively count nodes in the right subtree */
	right_count = binary_tree_nodes(tree->right);
	/* Check if current node has at least 1 child */
	if (tree->left != NULL || tree->right != NULL)
	{
		/* if the current has at least 1 child, */
		/* count it, so add 1 for the current node */
		total_count = 1 + left_count + right_count;
	}
	else
	{
		/* if current node has no child, don't count it */
		total_count = left_count + right_count;
	}
	return (total_count);
}
