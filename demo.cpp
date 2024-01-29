#include<iostream>
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
    cout << "how many data you want to enter : ";
    int c;
    cin >> c;
    while (c > 0)
    {
        node *temp = new node();
        cout << "enter data " << endl;
        int d;
        cin >> d;
        temp->data = d;
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

        c--;
    }
}
void display()
{
    cout<<"\n---------------\n";
    node *ptr = start;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout<<"\n-----------------\n";
}
void i_b()
{
    node *temp=new node();
    cout<<"enter data ";
    int d;
    cin>>d;
    temp->data=d;
    temp->next=start;
    start=temp;
}
void i_bet()
{
    node *temp=new node();
    cout<<"enter index where you want to enter data : ";
    int i;
    cin>>i;
    cout<<"enter data : ";
    int d;
    cin>>d;
    node *preptr,*ptr=start;
    while (i>1)
    {
        preptr=ptr;
        ptr=ptr->next;
        i--;
    }
    temp->data=d;
    temp->next=ptr;
    preptr->next=temp;

}
void i_e()
{
    node *temp=new node ();
    cout<<"enter data ";
    int d;
    cin>>d;
    temp->data=d;
    temp->next=NULL;
    rear->next=temp;
    rear=temp;
}
void d_b()
{
    node *temp=new node();
    temp=start;
    start=start->next;
    delete temp;
}
void d_bet()
{
    node *preptr,*ptr=start;
    cout<<"enter index";
    int i;
    cin>>i;
    while (i>1)
    {   preptr=ptr;
    ptr=ptr->next;
        i--;
    }
    node *temp=ptr;
    ptr=ptr->next;
    preptr->next=ptr;
    delete temp;

    
}
void d_e()
{
    node *ptr=start;
    while (ptr->next!=rear)
    {
        ptr=ptr->next;
    }
    node *temp=rear;
    ptr->next=NULL;
    rear=ptr;
    delete temp;


}
int main()
{
    int w = 0;
    while (w == 0)
    {   cout<<"----------------welcome -----------------"<<endl;
        cout << "\n1-> create the linklist " << endl;
        cout << "2->exit" << endl;
        cout << "enter choice  : ";
        int c;
        cin >> c;
        if (c==1)
        {
          
            start = NULL;
            rear = NULL;
            create();
            int a=0;
            while (a == 0)
            {   cout<<"\n-------------------------------"<<endl;
                cout << "\n 1-> display the linklist " << endl;
                cout << "2->insert at the beginning " << endl;
                cout << "3->insert at the between " << endl;
                cout << " 4-> insert at the end " << endl;
                cout << " 5-> delete at the beginning " << endl;
                cout << "6-> delete at the between " << endl;
                cout << " 7-> delete at the end " << endl;
                cout << "8-> back to manu " << endl;
                cout << " 9-> exit the program " << endl;
                cout << "enter choice : ";
                int ch;
                cin >> ch;
                switch (ch)
                {
                case 1:
                    display();
                    break;
                case 2:
                    i_b();
                    break;
                case 3:
                    i_bet();
                    break;
                case 4:
                    i_e();
                    break;
                case 5:
                    d_b();
                    break;
                case 6:
                    d_bet();
                    break;
                case 7:
                    d_e();
                    break;
                case 8:
                    a++;
                    break;
                case 9:
                    goto exit;
                    break;
                }
            }
        }
        else if(c==2)
        {
            w++;
        }  
        }
    
exit:
    return 0;
}