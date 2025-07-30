#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL || node->parent->parent = NULL)
        return (NULL);

    if (node->parent->parent->n > node->parent)
        return (node->parent->parent->left)
    else
        return (node)
}