#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: a pointer to the root node of the tree to measure the depth
 * Return: depth of the tree, otherwise 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* To store final depth */
	size_t depth;
	/* A pointer top traverse up to the root */
	const binary_tree_t *current;
	/* If the input node is NULL, it has no depth */
	if (tree == NULL)
	{
		return (0);
	}
	/* Initialise depth to 0 */
	depth = 0;
	/* Start from the current node */
	current = tree;
	/* Go upward through the tree until reaching the root */
	while (current->parent != NULL)
	{
		/* Each move up means one more level of depth */
		depth++;
		/* Move up to the parent node */
		current = current->parent;
	}
	/* When the loop is done, depth stores the total number */
	/* of edges from the node to the root */
	return (depth);
}
