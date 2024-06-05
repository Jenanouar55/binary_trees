#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: The value to store in the new node
 *
 * Return: A pointer to the new binary tree node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *bi_node = malloc(sizeof(binary_tree_t));

	if (bi_node == NULL)
	{
		return (NULL);
	}

	bi_node->n = value;
	bi_node->parent = parent;
	bi_node->left = NULL;
	bi_node->right = NULL;

	return (bi_node);
}
