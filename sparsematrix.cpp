#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"enter row and collum";
    cin>>r>>c;
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>a[i][j];
        }
        
    }
    cout<<"printing matrix :-"<<endl;
       for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int nz=0,z=0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j]==0)
            {
                z++;
            }
            else
            {
                nz++;
            }   
        }   
    }
    if (z>nz)
    {
        cout<<"this is sparse matrix";
    }
    else
    {
        cout<<"this not ";
    }

}