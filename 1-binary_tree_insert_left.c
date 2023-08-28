#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert nodes in the left
 * @parent: the parent to insert a node in its left node
 * @value: the value of the node
 * Return: inserted node or NULL if it failes
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *node = malloc(sizeof(binary_tree_t));
    binary_tree_t *left_node = malloc(sizeof(binary_tree_t));

    if (parent == NULL)
    {
        free(node);
        free(left_node);
        return NULL;
    }

    node->n = value;
    node->left = NULL;
    node->right = NULL;

    if (parent->left == NULL)
    {
        parent->left = node;
        free(left_node);
        return node;
    }

    left_node = parent->left;
    parent->left = node;
    node->left = left_node;

    return node;
}