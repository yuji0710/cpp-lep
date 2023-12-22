#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number ";
    cin>>n;
    int c=0,ans=0,r,a=n;
    while(a>0)
    {
        r=a%10;
        c++;
        a=a/10;
    }
    a=n;
    while(a>0)
    {
        r=a%10;
        int rm=1,co=0;
        while(c>co){
            rm=rm*r;
            co++;
        }
        ans=ans+rm;
        a=a/10;
    }
    if (ans==n)
    {
        cout<<"it is amstrong number";
    }
    else
    {
        cout<<"it is not amstrong number";
    }
    
}