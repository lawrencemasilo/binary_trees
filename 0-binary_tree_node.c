#include "binary_trees.h"


/**
 * binary_tree_node - creates a new node in the tree structure
 * @parent: pointer to the parent node
 * @value: value the new node must contain
 * Return: pointer to newly created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
