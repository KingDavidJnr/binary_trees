#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses binary tree via a post-order traversal.
 * @tree: The pointer to the root node of the tree to be traversed.
 * @func: The pointer to a function to call per node.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
