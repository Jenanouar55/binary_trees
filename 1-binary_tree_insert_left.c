#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the created node, on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left != NULL)
	{
		bi_node->left = parent->left;
		parent->left->parent = bi_node;
	}
	parent->left = bi_node;
	return (bi_node);
}
