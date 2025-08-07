#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: size (number of nodes) in the tree, otherwise 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* Variables to store the size of left and right subtrees */
	/* and the total size of the two */
	size_t left_size;
	size_t right_size;
	size_t total_size;
	/* If the tree is NULL, it contains no nodes */
	if (tree == NULL)
		return (0);
	/* Recursively get the size of the left subtree */
	left_size = binary_tree_size(tree->left);
	/* Recursively get the size of the right subtree */
	right_size = binary_tree_size(tree->right);
	/* Total size = left subtree + right subtree */
       /*	+ current node (1) */
	total_size = left_size + right_size + 1;

	return (total_size);
}
