#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"how many elements you want for array : ";
    cin>>r>>c;
    int a[r][c];
    int e=0,f=c;
    for (int i = 0; i < r; i++)
    {
        if (i<c)
        {
        for (int j = 0; j<c;j++)
        {
            if (j<=e)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        e++;
        cout<<endl;
        }
        else
        {
        for (int j = 0; j<c;j++)
        {
            if (j<f)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        f--;
        cout<<endl;
       
        }
    }
    
}
// *
// **
// ***
// **
// *