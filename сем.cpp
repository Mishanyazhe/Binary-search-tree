#include <iostream>
#include "Tree.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    Tree tree;
    //TreeNode();
    int x, n;
    cout << " Сколько вы хотите узлов?\n";
    cin >> n;
    cout << " Заполняйтe дерево\n";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        tree.Add(x);
    }
    //tree.printtree(root);
    system("Pause");
    return 0;
}