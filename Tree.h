#pragma once
#ifndef _TREE_H
#define _TREE_H
#include "Header.h"

using namespace std;

class Tree
{
private:
    TreeNode* root;
public:
    Tree();
    void Add(int);
    void add_node(int val, TreeNode*& root);
    void printtree(TreeNode* top);
};
#endif