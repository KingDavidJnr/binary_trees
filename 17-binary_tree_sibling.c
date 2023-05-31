#include "binary_trees.h"

/**
 * binary_tree_sibling - Searches the sibling of the
 *                       node in any binary tree.
 * @node: The pointer to node with siblings to be searched.
 *
 * Return: If node is NULL or there is no sibling - NULL.
 *         Otherwise - a pointer to the sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
