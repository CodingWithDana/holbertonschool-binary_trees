#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance
 * Return: balance factor (left or right), otherwise 0 if tree NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	/* Variables to store the heights of subtrees and the balance factor */
	int left_height;
	int right_height;
	int balance;
	/* If the tree is NULL, return 0 (no balance) */
	if (tree == NULL)
		return (0);
	/* Measure the height of the left subtree */
	left_height = (int)binary_tree_height(tree->left);
	/* Measure the height of the right subtree */
	right_height = (int)binary_tree_height(tree->right);
	/* Calculate the balance factor */
	balance = left_height + right_height;

	return (balance);
}
