#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new node with the given value as the right child
 *                            of a specified parent node in a binary tree.
 *
 * @parent: A pointer to the parent node where the new node will be inserted as the right child.
 * @value: The value to be stored in the new node.
 *
 * Return: If the parent is NULL or an error occurs, the function returns NULL.
 *         Otherwise, it returns a pointer to the new node.
 *
 * Description: If the parent already has a right child, the new node takes its place,
 *              and the old right child becomes the right child of the newly inserted node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
