#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - create a binary tree node
 * @parent: pointer poining to the parent of the note to create
 * @value: the value to put in the node
 * Return: the pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
