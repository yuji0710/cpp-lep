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
    int c;
    for (int i = 1; i < n; i++)
    {
        c = a[i];
        int j = i - 1;
        while (a[j] > c && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = c;
    }

    cout << "\n print all data \n";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "->";
    }
    cout << endl;
}