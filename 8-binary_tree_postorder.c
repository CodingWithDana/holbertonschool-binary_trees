#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_postorder - goes through a binary tree using postorder traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node's value
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	/* Traverse left subtree */
	binary_tree_postorder(tree->left, func);
	/* Traverse right subtree */
	binary_tree_postorder(tree->right, func);
	/* Visit current node */
	func(tree->n);
}
