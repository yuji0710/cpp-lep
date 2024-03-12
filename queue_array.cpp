#include <iostream>
using namespace std;
#define a 100
int s = -1;
int e = -1;
int q[a];

void create()
{
    int w;
    cout << "how many data you want to enter ";
    cin >> w;
    while (w > 0)
    {
        int i;
        cout << "enter data ";
        cin >> i;
        if (e > a - 1)
        {
            cout << "queue is overflows \n";
        }
        else
        {
            if (s == -1 && e == -1)
            {
                s = e = 0;
            }
            else
            {
                e++;
               
            }
             q[e] = i;
        }
        w--;
    }
}

void display()
{
    cout << "\n********* queue array *********\n";
    cout << endl
         << endl;
    cout << "\n1->display ascending order \n";
    cout << "\n2->display decending order \n";
    cout << "enter choice :- ";
    int c;
    cin >> c;
    cout << "array :- ";
    if (c == 1)
    {
        for (int i = s; i <= e; i++)
        {
            cout << q[i] << "->";
        }
    }
    else if (c == 2)
    {
        for (int i = e; i >= s; i--)
        {
            cout << q[i]<< "<-";
        }
    }
    cout << "\n********************************\n";
}


void push()
{
    cout << "enter data ";
    int i;
    cin >> i;
    if (e == a - 1)
    {
        cout << "queue is ovr flows \n";
    }
    else
    {
        e++;
        q[e] = i;
    }
}
void pop()
{
    cout << "if you want to delete \n";
    cout << "1->start";
    cout << "\n 2->end\n";
    int i;
    cout << "enter choice ";
    cin >> i;
    if (i == 1)
    {
        s++;
    }
    else if(i == 2)
    {
        e--;
    }
}
void peek()
{
    cout << "your first element is " << q[s] << endl;
}
int main()
{
    create();
    display();
    display();
    push();
    display();
    pop();
    display();
    peek();
}