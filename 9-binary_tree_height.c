#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of the binary tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t height = 0;
    binary_tree_t *node;

    if (tree->left)
        node = tree->left;
    else if (tree->right)
        node = tree->right;

    while (node)
    {
        height++;
        if (node->left)
            node = node->left;
        else if (node->right)
            node = node->right;
        else
            node = NULL;
    }

    return (height);
}