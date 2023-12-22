#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
node *start = NULL;
node *rear = NULL;
int main()
{
    int w = 0;
    while (w == 0)
    {
        int ch;
        cout << "1 -> adding data at the front  \n 2 -> adding data at the last \n 3 -> show the data \n 4 -> exit\n enter choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            int num1;
            cout << "enter data for front : ";
            cin >> num1;
            node *temp1;
            temp1 = new node();
            temp1->data = num1;
            temp1->next = NULL;
            if (start == NULL)
            {
                rear = start = temp1;
            }
            else
            {
                temp1->next=start;
                start =temp1;
            }

            break;
        case 2:
            cout << "enter data : ";
            int num;
            cin >> num;
            node *temp;
            temp = new node();
            temp->data = num;
            temp->next = NULL;
            if (start == NULL)
            {
                start = rear = temp;
            }
            else
            {
                rear->next = temp;
                rear = temp;
            }
            break;
        case 3:
            node *ptr;
            ptr = start;
            while (ptr != NULL)
            {
                cout << ptr->data << " -> ";
                ptr = ptr->next;
            }
            cout << endl;
            break;
        case 4:
            w++;
            break;
        }
        cout << "--------------------------------\n";
    }
}