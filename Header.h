#pragma once
#ifndef _HEADER_H
#define _HEADER_H
#include "iostream"

using namespace std;

class TreeNode
{
    friend class Tree; //само дерево. this tree
private:
    int Data;                     
    TreeNode* Left, * Right;
public:
    TreeNode(int);
};
#endif
