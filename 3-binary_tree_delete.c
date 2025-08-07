#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - delete an entire binary tree
 * @tree: pointer pointing to the root node of the tree to delete
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* If tree is NULL, do nothing */
	if (tree == NULL)
		return;
	/* Post-order traversal: delete the children node first then parent node */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
