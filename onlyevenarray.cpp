#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"enter value of rows and collum";
    cin>>r;
    int a[r];
    for (int i = 0; i < r; i++)
    {   get:
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
        if (a[i]%2!=0)
        {
            goto get;
        }
        cout<<endl;
    }
    for (int i = 0; i < r; i++)
    {
        cout<<a[i]<<" ";

    }
    

}