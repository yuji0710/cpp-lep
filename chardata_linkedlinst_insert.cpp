#include <iostream>
using namespace std;
class node
{
public:
    char name[30];
    int marks;

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
        cout << "1-> enter data at the front\n 2-> enter data at the end \n 3-> showing data \n 4->exit the code \n enter choice ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            node *temp;
            temp = new node();
            cout << "enter name  : ";

            cin >>temp->name;
            cout << "enter marks : ";
            int num;
            cin >> num;
            temp->marks = num;
            temp->next = NULL;
            if (start == NULL)
            {
                start = rear = temp;
            }
            else
            {
                temp->next = start;
                start = temp;
            }
            break;
        case 2:
            node *temp1;
            temp1 = new node();
            cout << "enter name  : ";
            cin>>temp1->name;
            cout << "enter marks : ";
            int num1;
            cin>>num1;
            temp1->marks = num1;
            temp1->next = NULL;
            if (start == NULL)
            {
                start = rear = temp1;
            }
            else
            {
                rear->next = temp1;
                rear = temp1;
            }
            break;
        case 3:
        cout<<endl<<endl;
            node* ptr;
            ptr= new node();
            ptr = start;
            while (ptr != NULL)
            {
                cout << "---------------------------------------\n";
                cout << "your name :- " << ptr->name << " \n";
                cout << "your marks :- " << ptr->marks << " \n";
                cout << "---------------------------------------\n";
                ptr = ptr->next;
            }
            break;
        case 4:
        {
            w++;
            break;
        }
           
        }
         cout << endl
                 << endl
                 << endl;
    }
}