#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array";
    cin>>n;
    int a[n];
    cout<<"enter data in array";
    for (int i = 0; i < n; i++)
    {   cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
    int c=0;
    for (int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
    int flag=1;
   for (int i = 0; i < n; i++)
   {
    for (int j = i; j <n; j++)
    {
        c=c+a[j];
        cout<<c<<endl;
    }
     c=0;
   }
}