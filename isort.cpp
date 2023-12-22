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

    cout<<"sorting array using insertion sort \n ";
    int c=0;
    for (int i = 1; i < n; i++)
    {
        c=a[i];
        int j=i-1;
        while (a[j]>c && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }                
        a[j+1]=c;
        
    }
     
   // first number never sorting in this method;
    for (int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
}