#include "Tree.h"

using namespace std; 

void print_node(int x) {
    cout << ' ' << x;
}

void Tree::printtree(TreeNode* top) {
    if (top != NULL) {
        printtree(top->Left);
        print_node(top->Data);
        printtree(top->Right);
    }
}

Tree::Tree()
{
    this->root = NULL;
}

void Tree::Add(int value)
{
    add_node(value, root);
}

//void Tree::createtree(TreeNode*& top) {
//    top = NULL;
//    int x;
//    while (f >> x)
//        Add(x);
//}

void Tree::add_node(int value, TreeNode*& root)
{
    if (!root)
    {
        root = new TreeNode(value);
        return;
    }

    if (value < root->Data)
    {
        add_node(value, root->Left);
    }

    if (value > root->Data)
    {
        add_node(value, root->Right);
    }
}