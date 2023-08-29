#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of the binary tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    size_t lh = binary_tree_height(tree->left);
    size_t rh = binary_tree_height(tree->right);

    return (lh > rh ? lh + 1 : rh + 1);
}