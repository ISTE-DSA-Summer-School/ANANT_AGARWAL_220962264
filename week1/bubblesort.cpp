#include <iostream>
using namespace std;

int main()
{
    int a[20], i, n, j, temp;

    cout << "enter number of elements in array:" << endl;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "enter numbers in array:";
        cin >> a[i];
    }

    for (i = 0; i < n - 1; i++) // pass
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1]) // comparison
            {                    // interchange
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "sorted array is:";
    for (i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }

    return 0;
}
