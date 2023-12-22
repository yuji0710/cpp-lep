#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array";
    cin>>n;
    int a[n],b[n];
    cout<<"enter data in array";
    for (int i = 0; i < n; i++)
    {   cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
    for (int i = 0; i < n-1; i++)
    {
        b[i]=a[i]+a[i+1];
        
    }
}