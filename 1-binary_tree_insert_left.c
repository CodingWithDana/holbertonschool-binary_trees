#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - insert a node as the left child of another node
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: pointer to the newly created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Can't insert a child if the parent node is NULL */
	if (parent == NULL)
		return (NULL);
	/* Allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));
	/* Memo allocation failed */
	if (new_node == NULL)
		return (NULL);
	/* Initialise the new node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	/* If parent already has a left child, move it to the new node */
	if (parent->left != NULL)
	{
		/* Set new node's left to old left child node */
		new_node->left = parent->left;
		/* When the parent already had a left child, the new node took its place */
		/*	 and become the parent of the old left child */
	       parent->left->parent = new_node;
	}
	/* Set new_node as the left_child of parent */
	parent->left = new_node;

	return (new_node);
}
