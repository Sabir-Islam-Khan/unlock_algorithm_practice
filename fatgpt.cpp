#include <iostream>

using namespace std;
int main()
{

    long long int n;
    cin >> n;

    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = 0;
    int index = 0;

    for (long long int i = 0; i < n; i++)
    {
        // cout << arr[i] << endl;
        if (max <= arr[i])
        {
            // cout << "max is " << max << " Current val is " << arr[i] << " assinging " << endl;
            max = arr[i];
            index = i + 1;
            // cout << "index set to " << index << " current loop at " << i << endl;
        }
    }

    cout << index << endl;

    return 0;
}