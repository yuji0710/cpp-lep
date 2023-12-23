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
    int i;
    cout << "enter size of link list : ";
    cin >> i;
    while (i != 0)
    {
        int d;

        cout << "enter data : ";
        cin >> d;
        node *temp = new node();
        temp->data = d;
        temp->next = start;
        if (start == NULL)
        {
            rear = start = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }

        i--;
    }
}
void i_b()
{
    cout << "enter data: ";
    int d;
    cin >> d;
    node *temp = new node();
    temp->data = d;
    temp->next = start;
    start = temp;
    rear->next = start;
}
void i_e()
{
    cout << "enter data: ";
    int d;
    cin >> d;
    node *temp = new node();
    temp->data = d;
    rear->next = temp;
    temp->next = start;
    rear = rear->next;
}
void i_bet()
{
    cout<<"enter index ";
    int i;
    cin>>i;
    node *preptr,*ptr;
    ptr=start;
    while (i!=0)
    {  
        preptr=ptr;
        ptr=ptr->next;
        i--;
    }
    cout << "enter data: ";
    int d;
    cin >> d;
    node *temp = new node();
    temp->data = d;
    temp->next=ptr;
    preptr->next=temp;
    
}
void d_b()
{
    node *temp=start;
    start=start->next;
    rear->next=start;
    delete temp;
}
void d_e()
{
    node *ptr=start,*temp=rear;
    while (ptr->next!=rear)
    {
        ptr=ptr->next;

    }
    ptr->next=start;
    rear=ptr;
    delete temp;
}
void d_bet()
{
    cout<<"enter index : ";
    int i;
    cin>>i;
    node *preptr,*ptr;
    ptr=start;
    while (i!=1)
    {  
        preptr=ptr;
        ptr=ptr->next;
        i--;
    }
    node *temp=ptr;
    ptr=ptr->next;
    preptr->next=ptr;
    delete temp;
    
}
void display()
{
    cout << "how many number you want to add : ";
    int i;
    cin >> i;
    node *ptr = start;
    cout<<"-------------------------------------\n ";
    while (i != 0)
    {
        cout << ptr->data << "-> ";
        ptr = ptr->next;
        i--;
    }
    cout<<"-------------------------------------\n ";

    cout << endl
         << endl;
}
int main()
{
    int w = 0;
    while (w == 0)
    {
        cout << "1-> create link list \n";
        cout << "2-> exit \n";
        cout << " enter choice : ";
        int c;
        cin >> c;
        if (c == 1)
        {
            create();
            int wc = 0;
            while (wc == 0)
            {
                cout << "1-> display the link list \n";
                cout << "2-> insert node at the beginning \n";
                cout << "3-> insert node at the between \n";
                cout << "4-> insert node at the end \n";
                cout << "5-> delete node at the beginning \n";
                cout << "6-> delete node at the between \n";
                cout << "7-> delete node at the end \n";
                cout << "8-> back the manu \n";
                cout << "9-> exit \n";
                cout << "enter choice : ";
                int i;
                cin >> i;
                switch (i)
                {
                case 1:
                    display();
                    break;
                case 2:
                    i_b();
                    break;
                case 3:
                {
                    i_bet();
                    break;
                }
                case 4:
                {
                    i_e();
                    break;
                }
                case 5:
                {
                    d_b();
                    break;
                }
                case 6:
                {
                    d_bet();
                    break;
                }
                case 7:
                {
                    d_e();
                    break;
                }
                
                case 8:
                    wc++;
                    break;
                case 9:
                    goto exit;
                    break;
                }
            }
        }
        else
        {
            w++;
        }
    }
exit:
    return 0;
}