#include "binary_trees.h"

/**
 * is_full_recursive - Evals if binary tree is full using recursion.
 * @tree: pointer to root node of the tree to be checked.
 *
 * Return: If tree is not full, 0.
 *         Otherwise, 1.
 */

int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Evals if binary tree is full.
 * @tree: The pointer to root node of tree to be checked.
 *
 * Return: If tree is NULL or is not full - 0.
 *         Otherwise - 1.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
