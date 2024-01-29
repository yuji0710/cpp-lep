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
void create()
{
    cout << "enter the number of data you want to add : ";
    int n;
    cin >> n;
    while (n > 0)
    {
        int d;
        cout << "enter data : ";
        cin >> d;
        node *temp = new node();
        temp->data = d;
        temp->next = NULL;
        if (start == NULL)
        {
            start = temp;
            rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }
        n--;
    }
}
void display()
{
    node *ptr = start;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
}
void add_at_begin()
{
    int d;
    cout << "enter data : ";
    cin >> d;
    node *temp = new node();
    temp->data = d;
    temp->next = NULL;
    temp->next = start;
    start = temp;
}
void add_at_end()
{
    int d;
    cout << "enter data : ";
    cin >> d;
    node *temp = new node();
    temp->data = d;
    temp->next = NULL;
    rear->next = temp;
    rear = temp;
}
void delete_at_begin()
{
    node *temp = new node();
    temp = start;
    start = start->next;
    delete temp;
}
void delete_at_end()
{
    node *temp = new node();
    node *ptr = start;
    while (ptr->next != rear)
    {
        ptr = ptr->next;
    }
    temp = rear;
    rear = ptr;
    delete temp;
    rear->next = NULL;
}
void add_at_between()
{
    int i;
    cout << "enter position ";
    cin >> i;
    node *preptr,*postptr;
    postptr=start;
    while (i>1)
    {
        preptr=postptr;
        postptr=postptr->next;
        i--;
    }
    
    cout<<preptr->data<<"   "<<postptr->data<<endl;
    node *temp = new node();
    cout << "enter data";
    int d;
    cin >> d;
    temp->data = d;
    temp->next = NULL;
    preptr->next = temp;
    temp->next = postptr;
}
void delete_at_between()
{
    cout<<"enter position that you want to delete : ";
    int i;
    cin>>i;
    node *preptr,*postptr;
    postptr=start;
    while (i>1)
    {
        preptr=postptr;
        postptr=postptr->next;
        i--;
    }
    
    cout<<preptr->data<<"   "<<postptr->data<<endl;
    
}

int main()
{

    int x = 0;
    while (x == 0)
    {
        cout << endl;
        cout << "------------------------------------------------------" << endl;
        cout << "                 singly linked list                   " << endl;
        cout << "------------------------------------------------------" << endl;
        cout << endl;
        cout << endl;
        cout << "press 1 to create a linked list..." << endl;
        cout << "press 2 to display linked list..." << endl;
        cout << "press 3 to add data at begin..." << endl;
        cout << "press 4 to add data at end..." << endl;
        cout << "press 5 to delete data at begin..." << endl;
        cout << "press 6 to delete data at end..." << endl;
        cout << "press 7 to add data at between..." << endl;
        cout << "press 8 to delete data at between..." << endl;
        cout << "press 9 to exit...";
        cout << endl
             << endl;
        cout << "enter your choice : ";
        int choice;
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
        start=NULL;
        rear=NULL;
            create();
            break;

        case 2:
            display();
            break;

        case 3:
            add_at_begin();
            break;

        case 4:
            add_at_end();
            break;

        case 5:
            delete_at_begin();
            break;

        case 6:
            delete_at_end();
            break;
        case 7:
            add_at_between();
            break;
        case 8:
            delete_at_between();
            break;
        case 9:
            x++;
            break;

        default:
            break;
        }
    }
}