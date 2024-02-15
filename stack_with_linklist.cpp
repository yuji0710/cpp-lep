#include<iostream>
using namespace std;
class node
{   public:
    int data;
    node *next;
};
node *top=NULL;
void create()
{
    cout<<"how many data you want to enter ";
    int y;
    cin>>y;
    while (y>0)
    {
        cout<<"enter data ";
        int d;
        cin>>d;
        node *temp=new node();
       temp->data=d;
       temp->next=top;
       top=temp;
       y--;
    }
    
}
void push(int i)
{
    node *temp=new node();
    temp->data=i;
    temp->next=top;
    top=temp;                                       
}
void display()
{   node *ptr=new node();
    ptr=top;
    cout<<endl<<"----------------------------------------"<<endl;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    
    cout<<endl<<"----------------------------------------"<<endl;
    
}
void pop()
{
    node *ptr=top;
    top=top->next;
    delete ptr;

}
void empty()
{
    if (top==NULL)
    {
        cout<<"stack is empty";
    }
    else
    {
        cout<<"stack is not empty";
    }
}
int main()
{
    create();
    
    display();
    cout<<"enter data for push ";
    int d;
    cin>>d;
    push(d);
    display();
    
    pop();
    display();
}