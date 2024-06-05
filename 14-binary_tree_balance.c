#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree. If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int gauche, droit;

	if (!tree)
		return (0);

	gauche = tree->left ? (int)binary_tree_height(tree->left) : -1;
	droit = tree->right ? (int)binary_tree_height(tree->right) : -1;

	return (gauche - droit);
}

/**
 * binary_tree_height - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t gauche = 0;
	size_t droit = 0;

	if (!tree)
		return (0);

	gauche = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	droit = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (gauche > droit ? gauche : droit);
}
