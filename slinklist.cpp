#include<iostream>
using namespace std;
class node
{   public:
    int data;
     node *next;
};
node *start=NULL;
node *rear=NULL;
void print()
{   node *str=start;
    while (str!=NULL)
    {
    cout<<str->data<<"->";
   str=str->next;
    }
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
    print();
}