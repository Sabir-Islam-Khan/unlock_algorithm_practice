#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long int m, n;
        cin >> m >> n;
        long int size = m + n;
        long int arr[size];

        for (long int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + size);

        for (int i = size - 1; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}