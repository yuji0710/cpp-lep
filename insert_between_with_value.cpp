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
    cout << "how many data you want to add";
    cin >> i;
    while (i != 0)
    {

        int n;
        cout << "enter data : ";
        cin >> n;
        node *temp = new node();
        temp->data = n;
        temp->next = NULL;
        temp->pre = NULL;
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
        i--;
    }
}
void display()
{
    cout<<"\n------------------------------------\n";
    
    node *ptr = start;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    
    cout<<"\n------------------------------------\n";
    cout<<endl<<endl;
}

void revarse()
{   cout<<"------------------------------------\n";
    node *ptr = rear;
    while (ptr != NULL)
    {
        cout << ptr->data << "<-";
        ptr = ptr->pre;
    }
    cout<<"\n------------------------------------\n";
    cout<<endl<<endl;
}
void i_bet()
{
    cout << "enter data : ";
    int d;
    cin >> d;
    cout << "Enter the  value of the node after which you want to add new node :: ";
    int nod;
    cin >> nod;
    node *ptr;
    node *preptr = start;
    while (preptr->data != nod)
    {
        preptr = preptr->next;
        ptr = preptr->next;
    }
    node *temp = new node();
    temp->data = d;
    preptr->next = temp;
    temp->pre = preptr;
    temp->next = ptr;
    ptr->pre = temp;
}
int main()
{
    cout << "create linklist.... \n";
    create();
    int i = 0;
    while (i==0)
    
    {
        cout << "1->display the link list \n";
        cout << "2->revarse the link list \n";
        cout << "3-> insert the value between the linklist \n";
        cout << " 4-> exit\n enter your choice : ";
        int c;
        cin >> c;
        switch (c)
        {
        case 1:
            display();
            break;
        case 2:
            revarse();
            break;
        case 3:
            i_bet();
            break;

        case 4:
            goto exit;
            break;
        }
    }
exit:
    return 0;
}