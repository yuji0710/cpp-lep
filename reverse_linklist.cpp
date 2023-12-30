#include<iostream>
using namespace std;
class node 
{   public:
    int data;
    node *next;
};
node *start=NULL;
node *rear=NULL;

void create()
{
    cout<<"enter size of array ";
    int n;
    cin>>n;
    while(n!=0)
    {
        cout<<"enter data ";
        int i;
        cin>>i;
        node *temp=new node();
        temp->data=i;
        temp->next=NULL;
        if (start==NULL)
        {
            start=rear=temp;
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
    node *ptr=start;
    while (ptr!=NULL)
    {
        cout<<ptr->data<<"-> ";
        ptr=ptr->next;
    }
}
void reverse ()
{
    node *current,*nnode,*pnode;
    current=start;
    nnode=start;
    pnode=NULL;
    while(nnode!=NULL)
    {
        nnode=nnode->next;
        current->next=pnode;
        pnode=current;
        current=nnode;
        
    }
    start=pnode;

}
int main()
{
    cout<<"\n---------------creating the node----------------- \n";
    create();
    cout<<"\n---------------display-------------\n";
    display();
    cout<<"\n---------------reverse-------------\n";
    reverse();
    cout<<"\n---------------display-------------\n";
    display();
}