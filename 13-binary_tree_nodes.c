#include "binary_trees.h"

/**
 *  binary_tree_nodes - counts the nodes in a binary tree
 *  @tree: pointer to the root node of the tree
 *  Return: Number of nodes in tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes, total;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_nodes = binary_tree_nodes(tree->left);
		right_nodes = binary_tree_nodes(tree->right);
	}

	total = left_nodes + right_nodes;

	if (tree->left || tree->right)
		return (total + 1);

	return (total);
}
