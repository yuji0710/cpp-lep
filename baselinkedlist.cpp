#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node * next;
};
void print(struct node *ptr)
{   while(ptr->next!=NULL)
    {
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
}
int main()
{
    struct node *head;
    struct node *head1;
    struct node *head2;
    struct node *head3;
    head=(struct node *)malloc(sizeof(struct node *));
    head1=(struct node *)malloc(sizeof(struct node *));
    head2=(struct node *)malloc(sizeof(struct node *));
    head3=(struct node *)malloc(sizeof(struct node *));
    
    head->data=4;
    head->next=head1;
    
    
    head1->data=5;
    head1->next=head2;
    
    head2->data=6;
    head2->next=head3;
    
    head3->data=7;
    head3->next=NULL;


    print(head);
}