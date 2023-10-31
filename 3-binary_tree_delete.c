#include "binary_trees.h"

/**
 * binary_tree_delete - delstes an entier binary tree
 * @tree: a pointer to the root node of the tree
 * Return: NOthing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}
}
