#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void print(struct node *str)
{
    cout<<str->data<<"->";
   str=str->next;
}
int main()
{
    struct node* head=NULL;
    struct node* temp;
    struct node* next_node;

    int n;
    cout<<"enter number ";
    cin>>n;
    
    while(n>0)
    {   
        temp=(struct node *)malloc(sizeof(struct node *));
        cout<<"enter value :- ";
        cin>>temp->data;
        temp->next=0;
        if(head==NULL)
        {
            head=next_node=temp;
            
        }
        else
        {
            next_node->next=temp;
            next_node=temp;
        }
        n--;
    }

    while(head!=0)
    {
        cout<<head->data<<"->";
        head=head->next;
    }


}