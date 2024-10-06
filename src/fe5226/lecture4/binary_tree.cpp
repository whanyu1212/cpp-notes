#include <iostream>

using namespace std;

struct Node
{
    int value;   // the value of the node
    Node *left;  // the node to the left
    Node *right; // the node to the right
};

// create a node and assign to it the given value and pointers
Node *createNode(int value, Node *left, Node *right)
{
    Node *n = new Node;
    n->value = value;
    n->left = left;
    n->right = right;
    return n;
}

Node *buildTree()
{
    Node *n1, *n2, *n3;

    n1 = createNode(4, NULL, NULL);
    n1 = createNode(2, n1, NULL);

    n2 = createNode(7, NULL, NULL);
    n2 = createNode(6, NULL, n2);

    n3 = createNode(5, NULL, NULL);
    n3 = createNode(3, n3, n2);

    n1 = createNode(1, n1, n3);

    return n1;
}

void printTreeInPreOrder(Node *node)
{
    if (node != NULL)
    {
        cout << node->value << endl;      // print value
        printTreeInPreOrder(node->left);  // visit left
        printTreeInPreOrder(node->right); // visit right
    }
}

int main()
{
    Node *treeTop = buildTree();

    printTreeInPreOrder(treeTop);

    return 0;
}