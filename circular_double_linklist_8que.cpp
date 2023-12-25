#include <iostream>
using namespace std;
class node
{
public:
    node *pre;
    int data;
    node *next;
};
node *start = NULL;
node *rear = NULL;
void create()
{
    int i;
    cout << "enter size of link list ";
    cin >> i;
    while (i != 0)
    {
        int n;
        cout << "enter data : ";
        cin >> n;
        node *temp = new node();
        temp->data = n;
        temp->pre = rear;
        temp->next = start;
        if (start == NULL)
        {
            start = rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
            start->pre = rear;
        }
        i--;
    }
}
void f_display()
{
    int i;
    cout << "------------------------------------------- \n";
    cout << "enter how many data you want to enter : ";
    cin >> i;
    node *ptr = start;
    while (i != 0)
    {
        cout << ptr->data << "-> ";
        ptr = ptr->next;
        i--;
    }

    cout << "\n----------------------------------------- \n";
    cout << "\n\n\n";
}
void l_display()
{
    int i;
    cout << "------------------------------------------- \n";
    cout << "enter how many data you want to enter : ";
    cin >> i;
    node *ptr = rear;
    while (i != 0)
    {
        cout << ptr->data << " <- ";
        ptr = ptr->pre;
        i--;
    }
    cout << "\n----------------------------------------- \n";
    cout << "\n\n\n";
}
void i_b()
{
    int d;
    cout << "enter data : ";
    cin >> d;
    node *temp = new node();
    temp->data = d;
    temp->pre = rear;
    rear->next = temp;
    temp->next = start;
    start->pre = temp;
    start = temp;
}
void i_bet()
{
    int d;
    cout << "enter data : ";
    cin >> d;
    int i;
    cout << "enter index where you want to add data : ";
    cin >> i;
    node *temp = new node();
    temp->data = d;
    node *preptr, *ptr;
    ptr = start;
    while (i != 1)
    {
        preptr = ptr;
        ptr = ptr->next;
        i--;
    }
    preptr->next = temp;
    temp->pre = preptr;
    ptr->pre = temp;
    temp->next = ptr;
}
void i_e()
{
    int d;
    cout<<"enter data : ";
    cin>>d;
    node *temp=new node();
    temp->data=d;
    start->pre=temp;
    temp->next=start;
    rear->next=temp;
    temp->pre=rear;
    rear=temp;

}
void d_b()
{
    node* temp=start;
    start=start->next;
    rear->next=start;
    delete temp;
}
void d_bet()
{
    int i;
    cout<<"enter index where you want to delete data : ";
    cin>>i;
    node *ptr=start,*preptr;
    while (i!=1)
    {
        preptr=ptr;
        ptr=ptr->next;
        i--;
    }
    node *temp=ptr;
    ptr=temp->next;
    preptr->next=ptr;
    ptr->pre=preptr;
    delete temp;
}
void d_e()
{
    node *temp=rear;
    rear=rear->pre;
    start->pre=rear;
    rear->next=start;
    delete temp;
}
int main()
{
    int w = 0;
    while (w == 0)
    {
        start = NULL;
        rear = NULL;
        int n;
        cout << "1->create link list \n2->exit \n";
        cout << " enter your choice : ";
        cin >> n;
        if (n == 1)
        {
            create();
            int wc = 0;
            while (wc == 0)
            {
                cout << "\n\n\n";
                cout << "menu...\n";
                cout << "1-> display left to right " << endl;
                cout << "2-> display right to left " << endl;
                cout << "3-> insert at the deginning " << endl;
                cout << "4-> insert at the between " << endl;
                cout << "5-> insert at the end " << endl;
                cout << "6-> delete at the deginning " << endl;
                cout << "7-> delete at the between" << endl;
                cout << "8-> delete at the end " << endl;
                cout << "9-> back to manu " << endl;
                cout << "10-> exit the code " << endl;
                cout << "enter your choice : ";
                int i;
                cin >> i;
                switch (i)
                {
                case 1:
                    f_display();
                    break;
                case 2:
                    l_display();
                    break;
                case 3:
                    i_b();
                    break;
                case 4:
                    i_bet();
                    break; 
                    case 5:
                        i_e();
                        break;
                    case 6:
                        d_b();
                        break;
                    case 7:
                        d_bet();
                        break;
                    case 8:
                        d_e();
                        break;
                case 9:
                    wc++;
                    break;
                case 10:
                    goto exit;
                }
            }
        }
        else
        {
            cout << "exit the code :)\n";
            w++;
        }
    }
exit:
    return 0;
}