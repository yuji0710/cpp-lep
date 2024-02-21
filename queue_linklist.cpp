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
{
    create();
    display();
    del();
    display();
    peek();
    
}