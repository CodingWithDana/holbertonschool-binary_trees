#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_inorder - goes through a binary tree using inorder traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node's value
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	/* Traverse left subtree */
	binary_tree_inorder(tree->left, func);
	/* Visit the current node */
	func(tree->n);
	/* Taverse right subtree */
	binary_tree_inorder(tree->right, func);
}
