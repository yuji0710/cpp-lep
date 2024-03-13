#include<iostream>
using namespace std;
int main()
{
    cout << "how many data you want to enter :- ";
    int n;
    cin >> n;
    int a[n];
    cout << "get all data :: \n ";
    for (int i = 0; i < n; i++)
    {
        cout << "enter data :- ";
        cin >> a[i];
    }
    cout << "\n print all data \n";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "->";
    }
    cout << endl;


    int num;

    cout<<"enter number your to search \n";
    cin>>num;
    int b=0, e=n-1,f=0;
   while (b <= e )
   {
        int mid=(b+e)/2;
        if (a[mid]==num)
        {
            cout<<" number is on "<<mid+1;
            f=1;
            break;
        }
        else if (a[mid]<num)
        {
            b=mid+1;
        }
        else if (a[mid]>num)
        {
            e=mid-1;
        }
        
    
    }
    if (f=0)
    {
        cout<<"num is not in array \n" ;
    }
    
}