#include <iostream>
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

    for (int i = 0; i < n; i++)
    {
        int sm = i;
        for (int j = i+1; j < n; j++)
        {
            if (a[sm] > a[j])
            {
                sm = j;
            }
        }
        int temp=a[sm];
        a[sm]=a[i];
        a[i]=temp;
    }
      cout << "\n print all data \n";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "->";
    }
    cout << endl;
}