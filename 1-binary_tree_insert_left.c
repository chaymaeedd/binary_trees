#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node with the given value as the left child
 *                           of a given parent node in a binary tree.
 *
 * @parent: A pointer to the parent node where the new node will be inserted as the left child.
 * @value: The value to be stored in the new node.
 *
 * Return: If the parent is NULL or an error occurs, the function returns NULL.
 *         Otherwise, it returns a pointer to the new node.
 *
 * Description: If the parent already has a left child, the new node takes its place,
 *              and the old left child becomes the left child of the newly inserted node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
