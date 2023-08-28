#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert nodes in the right
 * @parent: the parent to insert a node in its right node
 * @value: the value of the node
 * Return: inserted node or NULL if it failes
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *node = malloc(sizeof(binary_tree_t));
    binary_tree_t *right_node = malloc(sizeof(binary_tree_t));

    if (parent == NULL)
    {
        free(node);
        free(right_node);
        return NULL;
    }

    node->n = value;
    node->left = NULL;
    node->right = NULL;

    if (parent->right == NULL)
    {
        parent->right = node;
        free(right_node);
        return node;
    }

    right_node = parent->right;
    parent->right = node;
    node->right = right_node;

    return node;
}