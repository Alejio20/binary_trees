#include "binary_trees.h"

/**
 * array_to_avl - builds an AVL tree from an array
 * @array: array to create from
 * @size: size of the array
 *
 * Return: a pointer to the root node of the created AVL tree
 *         NULL on failure
 */
avl_t *array_to_avl(int *array, size_t size)
{
	unsigned int j;
	avl_t *root = NULL;

	for (j = 0; j < size; j++)
		avl_insert(&root, array[j]);

	return (root);
}
