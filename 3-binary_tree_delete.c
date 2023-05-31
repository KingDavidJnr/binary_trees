#include "binary_trees.h"

/**
 * binary_tree_delete - Removes a binary tree.
 * @tree: The pointer to the root node of the tree to be deleted.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
