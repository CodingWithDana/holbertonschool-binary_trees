#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: height of the tree, otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;
	size_t max_height;

	/* If the tree is NULL, it has no height */
	if (tree == NULL)
		return (0);
	/* If the node is a leaf (no children), its height is 0 */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	/* Recursively measure the height of the left subtree */
	left_height = binary_tree_height(tree->left);
	/* Recursively measure the height of the right subtree */
	right_height = binary_tree_height(tree->right);
	/* Determine which subtree is taller */
	if (left_height > right_height)
	{
		max_height = left_height;
	}
	else
	{
		max_height = right_height;
	}
	/* Add 1 to account for the edge from this node to its child */
	return (max_height + 1);
}
