#include "binary_trees.h"
#include <stdlib.h>
/**
 * find_depth - helper function to find the depth of the leftmost leaf
 * @node: pointer pointing to the head node
 * Return: the depth of the leftmost leaf
 */
static int find_depth(const binary_tree_t *node)
{
	int depth = 0;

	/* Traverse down the left children until NULL */
	while (node != NULL)
	{
		/* Count each node on the path */
		depth++;
		/* Move to the next left child */
		node = node->left;
	}
	/* Return the total depth of the leftmost leaf */
	return (depth);
}

/**
 * recursively_check_perfect_subtree - check if every subtree is perfect
 * @tree: pointer pointing the subtree to be checked
 * @depth: expected depth of all leaves (from function find_depth)
 * @level: current level of node in the tree (root level = 0)
 * Return: 1 if subtree is perfect, if not then 0
 */
static int recursively_check_perfect_subtree(const binary_tree_t *tree,
		int depth, int level)
{
	/* If the current node is NULL, this subtree is not perfect */
	if (tree == NULL)
	{
		return (0);
	}
	/* Check if the node is a leaf (no children) */
	if (tree->left == NULL && tree->right == NULL)
	{
		/* For a perfect tree, all leaves must be at same depth */
		/* Here, depth is the expected leaf depth, and */
		/* +1 for the actual depth of this leaf */
		if (depth == level + 1)
		{
			/* Leaf at correct depth, perfect, return 1 */
			return (1);
		}
		else
		{
			/* Leaf at incorrect depth, not perfect, return 0 */
			return (0);
		}
	}
	/* If a node has only one child, tree is not full, so not perfect */
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	/* Recursively check left and right subtrees */
	/* incrementing level as we go deeper */
	if (recursively_check_perfect_subtree(tree->left, depth, level + 1) &&
		recursively_check_perfect_subtree(tree->right, depth, level + 1))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if tree is perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int final_depth;
	int result;

	/* If tree is empty, not perfect */
	if (tree == NULL)
		return (0);
	/* Find the depth of the leftmost leaf to use as reference */
	final_depth = find_depth(tree);
	/* Recursively check if tree is perfect starting at level 0 */
	/* then store result first before returning */
	result = recursively_check_perfect_subtree(tree, final_depth, 0);

	return (result);
}
