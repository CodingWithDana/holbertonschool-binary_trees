#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_full - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: height of the tree, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full;
	int right_full;

	/* If the tree is NULL, it's NOT full */
	if (tree == NULL)
	{
		return (0);
	}
	/* If the node is a leaf (no children), it's full */
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	/* If the node has both left and right children, */
	/* recursively check both subtrees */
	if (tree->left != NULL && tree->right != NULL)
	{
		left_full = binary_tree_is_full(tree->left);
		right_full = binary_tree_is_full(tree->right);

		if (left_full == 1 && right_full == 1)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	/* If the node has only one child, it's not full */
	return (0);
}
