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
    for (int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
    cout<<"sorting array using bubble sort \n ";
    int c=0;
    
    while(c!=n)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i]>a[i+1])
            {
                a[i]=a[i]+a[i+1];
                a[i+1]=a[i]-a[i+1];
                a[i]=a[i]-a[i+1];
            }
            
        }
        c++;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
}