#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: parent node
 * @value: integer to value
 * Return: pointer to node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(heap_t));
	if (!node)
		return (NULL);
	if (parent == NULL)
	{
		node->parent = NULL;
		node->right = NULL;
		node->left = NULL;
		node->n = value;
		return (node);
	}
	else
	{
		node->parent = parent;
		node->right = NULL;
		node->left = NULL;
		node->n = value;
		return (node);
	}
}
