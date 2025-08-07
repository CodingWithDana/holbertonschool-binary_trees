#include "binary_trees.h"
#include <stdlib.h>
/**
 * get_height - helper function to calculate the height of a tree
 * @node: pointer to the current node
 * Return: height of the tree from this node
 */
int get_height(const binary_tree_t *node)
{
	int l;
	int r;

	if (node == NULL)
		return (0);
	/* Measure the height of the left subtree */
	l = get_height(node->left);
	/* Measure the height of the right subtree */
	r = get_height(node->right);
	/* Determine which subtree is taller */
	if (l > r)
	{
		return (l + 1);
	}
	else
	{
		return (r + 1);
	}
}

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
	/* Recursively calc the height of the left subtree */
	if (tree->left != NULL)
	{
		left_height = get_height(tree->left);
	}
	else
	{
		left_height = 0;
	}
	/* Recursively calc the height of the right subtree */
        if (tree->right != NULL)
        {
		right_height = get_height(tree->right);       
	}
	else
	{
		right_height = 0;
	}	
	/* Calculate the balance factor */
	balance = left_height - right_height;

	return (balance);
}
