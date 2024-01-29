#include<iostream>
using namespace std;
class linkedlist
{   
    struct node
    {
        int data;
        node* next;
    }*p;
    linkedlist()
    {
        p=NULL;
    }
    void end(int n)
    {   node * temp,rear;
        if (p==NULL)
        {
            temp= new node();
            temp->data=n;
            temp->next=null;
            p=temp;
        }
        else{
                   
        }
    }
};
int main()
{
    linkedlist a;
    cout<<"how many enter data you want ";
    int n;
    cin>>n;
    while(n>0)
    {   int num;
        cout<<"enter data : ";
        cin>>num;
        a.end(num);
        n--;
    }    
}