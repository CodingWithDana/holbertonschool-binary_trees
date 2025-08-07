#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_leaves - count the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the leaves
 * Return: number of leaves, otherwise 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* Number of leaves in the left subtree */
	size_t left_leaves;
	/* Number of leaves in the right subtree */
	size_t right_leaves;
	/* Total number of leaves in this subtree */
	size_t total_leaves;

	/* If the tree is empty (NULL), there are no leaf nodes */
	if (tree == NULL)
		return (0);
	/* If both left and right are NULL, this node is a leaf */
	/* so count it as 1 leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Recursively count the leaves in the left subtree */
	left_leaves = binary_tree_leaves(tree->left);
	/* Recursively count the leaves in the right subtree */
	right_leaves = binary_tree_leaves(tree->right);
	/* Add the number of leaves from both sides */
	total_leaves = left_leaves + right_leaves;

	return (total_leaves);
}
