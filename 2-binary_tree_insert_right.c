#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node on the left of a node
 * @parent: pointer to the parent node
 * @value: value the new node must contain
 * Return: pointer to newly created node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
	{
		return (NULL);
	}
	node = binary_tree_node(parent, value);

	if (node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	else
	{
		parent->left = NULL;
	}
	parent->right = node;
	return (node);
}
