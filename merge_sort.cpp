#include<iostream>
using namespace std;
void printarray(int a[],int n)
{
    cout<<endl;
    cout<<"array :- ";
    for (int  i = 0; i < n; i++)
    {
        cout<<a[i]<<"->";
    }
    cout<<endl;
}
void merge_c(int a[],int si,int mid,int ei)
{
    int ans[(ei-si+1)];
    int x=0;
    int i1=si,i2=mid+1;
    while (i1<=mid && i2<=ei)
    {
        if (a[i1]<=a[i2])
        {
            ans[x++]=a[i1++];
        }
        else
        {
            ans[x++]=a[i2++];
        }
    }
    while (i1<=mid)
    {
        ans[x++]=a[i1++];
    }
    while (i2<=ei)
    {
        ans[x++]=a[i2++];
    }
    
    for (int i = 0,j=si; i < (ei-si+1);j++, i++)
    {
        a[j]=ans[i];
    }
    
    
}
void merge_d(int a[],int si,int ei)
{
    if (si>=ei)
    {
        return;
    }
    int mid=(ei+si)/2;
    merge_d(a,si,mid);
    merge_d(a,mid+1,ei);
    merge_c(a,si,mid,ei);

}

int main()
{
    cout<<"enter how many data you want to enter ";
    int n;
    cin>>n;
    int a[n];
    cout<<"get the data\n\n";
    for (int i = 0; i < n; i++)
    {
        cout<<"enter data ";
        cin>>a[i];
    }
    printarray(a,n);
    int t=n-1;
    merge_d(a,0,t);
    printarray(a,n);
}