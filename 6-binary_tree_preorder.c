#include "binary_trees.h"

/**
 * binary_tree_preorder - Runs on the binary tree using pre-order traversal.
 * @tree: The pointer to the root node of the tree to traverse.
 * @func: The pointer to a function to call for each node.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
