#include<iostream>
using namespace std;
int main()
{
    cout<<"enter size of matrix ";
    int r,c;
    cin>>r>>c;
    int a[r][c];
    cout<<"enter matrix \n";
    for (int  i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>a[i][j];
        }
        
    }
    
    cout<<"printing matrix \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<a[i][j]<<"  ";
        }
    cout<<endl;
    }
    int count=0,backcount=0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j]==0)
            {
                count++;
            }
            else
            {
                backcount++;
            }
            
        }
        
    }
    
    if (count>backcount)
    {
        cout<<"\nit is sparse matrix \n";
        cout<<"representing sparse matrix.. \n ";
        int re[3][r*c],add=0;
        for (int i = 0;i<r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (a[i][j]!=0)
                {
                    re[0][add]=i;
                    re[1][add]=j;
                    re[2][add]=a[i][j];
                    add++;
                }   
            }   
        }
        cout<<"printing matrix : \n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < add; j++)
            {
                cout<<re[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"it is not sparse matrix \n";
    }
    

    
}