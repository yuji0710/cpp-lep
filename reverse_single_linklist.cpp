#include<iostream>
using namespace std;
class node
{   public:
    int data;
     node *next;
};
node *start=NULL;
node *rear=NULL;
node *r_node=NULL;
void print(node *str)
{
    while (str!=NULL)
    {
    cout<<str->data<<"->";
   str=str->next;
    }
}
void reverse()
{   
    node *current,*nextnode,*prenode=NULL;

    current=nextnode=start;
    while (nextnode!=NULL)
    {
        nextnode=nextnode->next;
        current->next=prenode;
        prenode=current;
        current=nextnode;
    
    }
    r_node=prenode;
   print(r_node);
}
int main()
{
   node* temp;

    int n;
    cout<<"enter size of link list : ";
    cin>>n;
    
    while(n>0)
    {   int d;
        cout<<"enter value :- ";
        cin>>d;
        temp=new node();
        temp->data=d;
        
        temp->next=0;
        if(start==NULL)
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
    print(start);
    cout<<endl;
    reverse();
}