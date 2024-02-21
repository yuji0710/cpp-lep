#include<iostream>
using namespace std;
class node 
{
    public:
    int data;
    node *next;
};
node * top =NULL;
node * rear= NULL;

void create()
{   int n;
    cout<<"how many data you want to enter ";
    cin>>n;
    while (n>0)
    {
        node* temp=new node();
        cout<<"enter data :- ";
        int d;
        cin >>d;
        temp->data=d;
        temp->next=NULL;
        if (top == NULL)
        {
            top=rear=temp;
        }
        else
        {
            rear->next=temp;
            rear=temp;
        }
        n--;
    }
}
void display()
{
    cout<<"-------------------------------------------------"<<endl;
    node *ptr=top;
    while (ptr!=NULL)
    {
        cout<<ptr->data<<" -> ";
        ptr=ptr->next;
    }
    
    cout<<"\n-------------------------------------------------"<<endl;
}
void del()
{
    node *temp=top;
    top=top->next;
    delete temp;
}
void peek()
{
    cout<<"first node in queue is "<<top->data<<endl;

}
int main()
{ int w = 0;
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
                cout << "2-> delete node at the beginning \n";
                cout << "3-> peek in queue \n";
                cout << "4-> back the manu \n";
                cout << "5-> exit \n";
                cout << "enter choice : ";
                int i;
                cin >> i;
                switch (i)
                {
                case 1:
                    display();
                    break;
                case 2:
                {
            
                    del();
                    break;
                }
                case 3:
                {

                    peek();
                    break;
                }
                
                case 4:
                    wc++;
                    break;
                case 5:
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