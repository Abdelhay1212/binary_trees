#include "binary_trees.h"

/**
 * tree_height - calculate the height to a given binary tree
 * @tree: pointer to the root node of the tree to calculate its height
 * Return : the height of binary tree
 */
int tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return -1;

    int left_height = tree_height(tree->left);
    int right_height = tree_height(tree->right);

    return (left_height > right_height) ? left_height + 1 : right_height + 1;
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if it is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    int left_height = tree_height(tree->left);
    int right_height = tree_height(tree->right);

    return (left_height == right_height);
}