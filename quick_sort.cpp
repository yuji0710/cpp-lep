#include <iostream>
using namespace std;
void printarray(int a[], int n)
{
    cout << endl;
    cout << "array :- ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "->";
    }
    cout << endl;
}

int part(int a[], int low, int high)
{
    int i=low-1;
    int p=high;
    for (int j = low;j < high; j++)
    {
        if (a[j]<p)
        {
            i++;
        }
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    i++;
    int temp=a[i];
    a[i]=p;
    a[high]=temp;
    return i;
    
}
void quick(int a[], int low, int high)
{
    if (low < high)
    {
        int p = part(a, low, high);
        quick(a, low, p - 1);
        quick(a, p+1, high);
    }
}

int main()
{
    cout << "enter how many data you want to enter ";
    int n;
    cin >> n;
    int a[n];
    cout << "get the data\n\n";
    for (int i = 0; i < n; i++)
    {
        cout << "enter data ";
        cin >> a[i];
    }
    printarray(a, n);
    quick( a, 0, n - 1);
      printarray(a, n);
}