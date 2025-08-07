#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_preorder - goes through a binary tree using preorder traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node's value
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Visit the current node */
	func(tree->n);
	/* Traverse left subtree */
	binary_tree_preorder(tree->left, func);
	/* Traverse right subtree */
	binary_tree_preorder(tree->right, func);
}
