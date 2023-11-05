#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the -child of another node
 *
 * @parent: Pointer to the node to insert the right-child in
 * @value: The value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tree;

	if (parent == NULL)
		return (NULL);

	tree = malloc(sizeof(binary_tree_t));

	if (tree == NULL)
		return (NULL);

	tree->n = value;
	tree->parent = parent;
	tree->right = NULL;
	tree->right = NULL;

	if (parent->right != NULL)
	{
		tree->right = parent->right;
		free(parent->right);
	}

	parent->right = tree;

	return (tree);
}
