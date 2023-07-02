#include <iostream>
using namespace std;

int main()
{
    int a[20], i, n, j, key;

    cout << "enter number of elements in array:" << endl;
    cin >> n;

    for (i = 0; i < n; i++)
    {

        cout << "enter numbers in array:";
        cin >> a[i];
    }

    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        // Move elements of arr[0..i-1],
        // that are greater than key,
        // to one position ahead of their
        // current position
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }

    cout << "sorted array is:";
    for (i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }

    return 0;
}