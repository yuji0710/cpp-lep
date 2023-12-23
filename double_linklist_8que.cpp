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
    cout << "enter size of linklist \n";
    int c;
    cin >> c;
    while (c != 0)
    {
        int da;
        cout << "enter data : ";
        cin >> da;
        node *temp = new node();
        temp->data = da;
        temp->pre = NULL;
        temp->next = NULL;
        if (start == NULL)
        {
            start = rear = temp;
        }
        else
        {
            rear->next = temp;
            temp->pre = rear;
            rear = temp;
        }
        c--;
    }
}
void f_display()
{
    node *ptr = start;
    cout << "-----------------------------------------"<<endl;
    cout << "print the start to rear : ";
    while (ptr != NULL)
    {
        cout << ptr->data << "-> ";
        ptr = ptr->next;
    }
    cout << endl;
    cout << "-----------------------------------------";
    cout << endl
         << endl;
}

void l_display()
{
    node *ptr = rear;
    cout << "-----------------------------------------"<<endl;
    cout << "print the rear to start  : ";
    while (ptr != NULL)
    {
        cout << ptr->data << "-> ";
        ptr = ptr->pre;
    }
    cout << endl;
    cout << "-----------------------------------------";
    cout << endl
         << endl;
}
void i_b()
{   int d;
    cout<<"enter data ";
    cin>>d;
    node* temp=new node();
    temp->data=d;
    temp->pre=NULL;
    temp->next=start;
    start->pre=temp;
    start=start->pre;
}

void i_bet()
{   int i;
    cout<<"enter index";
    cin>>i;
   int d;
    cout<<"enter data ";
    cin>>d;
    node *preptr,*ptr;
    ptr=start;
    while (i!=0)
    {
        preptr=ptr;
        ptr=ptr->next;
        i--;
    }
    node* temp=new node();
    temp->data=d;
    temp->pre=preptr;
    temp->next=ptr;
    ptr->pre=temp;
    preptr->next=temp;
}
void i_e()
{   int d;
    cout<<"enter data ";
    cin>>d;
    node* temp=new node();
    temp->data=d;
    temp->pre=rear;
    temp->next=NULL;
    rear->next=temp;
    rear=temp;
}

//delete the node

void d_b()
{
    node* temp=start;
    start=start->next;
    start->pre=NULL;
    delete temp;
}

void d_bet()
{   int i;
    cout<<"enter index";
    cin>>i;
    node *preptr,*ptr;
    ptr=start;
    while (i!=1)
    {
        preptr=ptr;
        ptr=ptr->next;
        i--;
    }
    node* temp=ptr;
    ptr=ptr->next;
    ptr->pre=preptr;
    preptr->next=ptr;
    delete temp;
}
void d_e()
{ 
    node* temp=rear;
    rear=rear->pre;
    rear->next=NULL;
    delete temp;
}


int main()
{
    int w = 0;
    while (w == 0)
    {
        int ch;
        cout << "1-> create linklist \n";
        cout << "2 -> exit \n";
        cout << "enter your choice";
        cin >> ch;
        if (ch == 1)
        {
            create();
            int wc = 0;
            while (wc == 0)
            {
                cout << "\n\n\n";
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