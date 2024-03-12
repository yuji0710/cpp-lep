#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *right;
    node *left;
};
node *tree = NULL;
void create()
{
    int i;
    cout << "how many data you want to enter \n";
    cin >> i;
    while (i != 0)
    {
        node *temp = new node();
        node *preptr, *ptr;
        cout << "enter data ";
        int d;
        cin >> d;
        temp->data = d;
        temp->right = NULL;
        temp->left = NULL;
        if (tree == NULL)
        {
            tree = temp;
        }
        else
        {
            preptr = NULL;
            ptr = tree;
            while (ptr != NULL)
            {
                preptr = ptr;
                if (d < ptr->data)
                {
                    ptr = ptr->left;
                }
                else
                {
                    ptr = ptr->right;
                }
            }

            if (d < preptr->data)

            {
                preptr->left = temp;
            }
            else
            {
                preptr->right = temp;
            }
        }
        i--;
    }
}
void preorder(node *tree)
{
    if (tree != NULL)
    {
        cout << tree->data << endl;
        preorder(tree->left);
        preorder(tree->right);
    }
}
void postorder(node *tree)
{
    if (tree != NULL)
    {
        postorder(tree->left);
        postorder(tree->right);
        cout << tree->data << endl;
    }
}
void inorder(node *tree)
{
    if (tree != NULL)
    {
        inorder(tree->left);
        cout << tree->data << endl;
        inorder(tree->right);
    }
}
int search()
{
    cout << "enter element you want to search \n";
    int i, c = 0;
    cin >> i;
    node *a = tree;
    while (a != NULL)
    {
        if (a->data == i)
        {
            c++;
            return c;
        }
        else
        {
            if (i < a->data)
            {
                a = a->left;
            }
            else if (i > a->data)
            {
                a = a->right;
            }
        }
    }
    return c;
}
int main()
{
    int a = 0;
    while (a == 0)
    {
        cout << "\n************* MAIN MENU ****************\n";
        cout << "\n1-> Insert";
        cout << "\n2-> display preorder ";
        cout << "\n3-> display postorder ";
        cout << "\n4-> display inorder ";
        cout << "\n5->searching the element ";
        cout << "\n6-> Exit";
        cout << "\n\n***************************************";
        cout << "\n\nEnter your option:";
        int b;
        cin >> b;
        switch (b)
        {
        case 1:
        {
            create();
            break;
        }
        case 2:
        {
            preorder(tree);
            break;
        }
        case 3:
        {
            postorder(tree);
            break;
        }
        case 4:
        {
            inorder(tree);
            break;
        }
        case 5:
        {
            int f = search();
            if (f == 0)
            {
                cout << "\nits not \n";
            }
            if (f == 1)
            {
                cout << "\nits is \n";
            }

            break;
        }
        case 6:
        {
            a++;
            break;
        }
        }
    }
}