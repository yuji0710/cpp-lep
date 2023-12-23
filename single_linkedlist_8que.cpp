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
node *create(int ch)
{
    while (ch != 0)
    {
        int num;
        cout << "enter data ";
        cin >> num;
        node *temp = new node();
        temp->data = num;
        temp->next = NULL;
        if (start == NULL)
        {
            rear = start = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }
        ch--;
    }
    return start;
}
void display(node *ptr)
{
    cout << "---------\n";
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << "\n---------\n";
    cout << endl
         << endl;
}
void i_b(int d)
{
    node *temp = new node();
    temp->data = d;
    temp->next = start;
    start = temp;
}
void i_bet(int i)
{  
    node * ptr=start,*preptr;
    while(i>1)
    {   preptr=ptr;
        ptr=ptr->next;
        i--;
    }
   node *temp=new node();
   cout<<"enter data ";
    int d;
   cin>>d;
   temp->data=d;
   temp->next=ptr;
   preptr->next=temp;
}
void d_bet()
{
    int i;
    cout<<"enter index :- ";
    cin>>i;
    node* ptr=start,*preptr;
    while (i!=1)
    {
        preptr=ptr;
        ptr=ptr->next;
        i--;
    }
    node *temp=ptr->next;
    preptr->next=temp;
    delete ptr;

                       
}
void d_b()
{
    node *temp = new node();
    temp = start;
    start = start->next;
    delete temp;
}
void i_e(int d)
{
    node *temp = new node();
    temp->data = d;
    rear->next = temp;
    rear = temp;
}
void d_e()
{
    node *temp = start;
    while (temp->next != rear)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    rear = temp;
}
int main()
{

    int w = 0;
    while (w == 0)
    {
        cout << "------------------------------------------------------------------------------\n";

        cout << "1-> create linkedlist \n 2->exit \n enter choice: ";
        int ch;
        cin >> ch;
        if (ch == 1)
        {
            rear = NULL;
            start = NULL;
            cout << "how many data you want to enter ";
            int n;
            cin >> n;
            start = create(n);
            display(start);

            int wc = 0;
            while (wc == 0)
            {
                cout << " 1->insert at the beginning \n";
                cout << " 2->insert at the end \n";
                cout << " 3->insert at the between \n";
                cout << " 4->delete at the beginning \n";
                cout << " 5->delete at the end \n";
                cout << " 6->delete at the between \n";
                cout << " 7->back to manu \n";
                cout << " 8->exit \n\n";
                cout << " enter choice : ";
                int i;
                cin >> i;
                switch (i)
                {
                case 1:
                    cout << "enter data";
                    int da;
                    cin >> da;
                    i_b(da);
                    display(start);

                    break;
                case 2:
                    cout << "enter data";
                    int da1;
                    cin >> da1;
                    i_e(da1);
                    display(start);
                    break;
                case 3:
                    int in;
                    cout<<"enter index :- ";
                    cin>>in;
                    i_bet(in);
                    display(start);
                  
                    break;
                case 4:
                    d_b();
                    display(start);

                    break;
                case 5:
                    d_e();
                    display(start);
                    break;
                case 6:
                    d_bet();
                    display(start);
                    break;
                case 7:
                    wc++;
                    break;
                case 8:
                    goto exit;
                    break;
                }
            }
        }
        else
        {
            w++;
            break;
        }
    }
exit:
    return 0;
}