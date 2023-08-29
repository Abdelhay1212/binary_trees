#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of the binary tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t height = 0;
    size_t height1 = 0;
    size_t height2 = 0;
    binary_tree_t *node1;
    binary_tree_t *node2;

    if (tree == NULL)
        return (0);

    /* first check */
    if (tree->left)
        node1 = tree->left;
    else if (tree->right)
        node1 = tree->right;
    else
        return (height);

    while (node1)
    {
        height1++;
        if (node1->left)
            node1 = node1->left;
        else if (node1->right)
            node1 = node1->right;
        else
            node1 = NULL;
    }

    /* secend check */
    if (tree->right)
        node2 = tree->right;
    else if (tree->left)
        node2 = tree->left;

    while (node2)
    {
        height2++;
        if (node2->right)
            node2 = node2->right;
        else if (node2->left)
            node2 = node2->left;
        else
            node2 = NULL;
    }

    /* copmare heigths*/
    if (height1 > height2)
        height = height1;
    else
        height = height2;

    return (height);
}