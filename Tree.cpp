#include <iostream>
using namespace std;
struct node
{
    int info;
    node *left;
    node *right;
};
node *Tree()
{
    int data;
    node *NewNode = new node;
    cout << "\nEnter data into tree: ";
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    NewNode->info = data;
    cout << "\nEnter for left of the " << data << " :";
    NewNode->left = Tree();
    cout << "\nEnter for Right of the " << data << " :";
    NewNode->right = Tree();
    return NewNode;
}
node *PreOrder(node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    cout << root->info << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}
node *InOrder(node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    InOrder(root->left);
    cout << root->info << " ";
    InOrder(root->right);
}
node *PostOrder(node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->info << " ";
}
int main()
{
    node *n = new node;
    node *root = NULL;
    root = Tree();
    int TraversingOption;
    do
    {
        cout << "\n 1. PreOrder" << "\n 2. InOrder" << "\n 3. PostOrder.\n";
        cout << "\nChoose your Option: ";
        cin >> TraversingOption;
        switch (TraversingOption)
        {
        case 1:
            PreOrder(root);
            break;
        case 2:
            InOrder(root);
            break;
        case 3:
            PostOrder(root);
            break;
        default:
            break;
        }
    } while (TraversingOption);

    return 0;
}