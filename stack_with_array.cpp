#include<iostream>
using namespace std;
#define n 1000
int stack[n];
int top=-1;
void push()
{
    cout<<"enter data ";
    int d;
    cin>>d;
    if (top==n-1)
    {
        cout<<"over flow the stack "<<endl;
    }
    else
    {
        top++;
       stack[top]=d;
    }    
}
void pop()
{  
    if (top==-1)
    {
        cout<<"error..."<<endl;
    }
    else
    {
        int i=stack[top];
        top--;
    }
    
}
void display()
{ cout<<"\n------------------------------------\n";
    for (int i = top; i >=0; i--)
    {
        cout<<stack[i]<<"->";
    }
    cout<<"\n------------------------------------\n";
}
void peek()
{
    cout<<"\n your first value is "<<stack[top]<<endl;
}
int main()
{
    push();
    
    push();
    push();
    push();
    push();


    display();
    pop();
    display();
    peek();
    display();
}