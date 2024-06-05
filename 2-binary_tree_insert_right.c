#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the created node, on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *bi_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	bi_node = binary_tree_node(parent, value);
	if (bi_node == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		bi_node->right = parent->right;
		parent->right->parent = bi_node;
	}
	parent->right = bi_node;
	return (bi_node);
}
