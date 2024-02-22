#include <bits/stdc++.h>
using namespace std;

// TODO: Its wrong. Need to fix
int main()
{
    long long int total, paid;

    cin >> total >> paid;

    long long int change = paid - total;

    int arr[] = {1, 4, 8, 16, 32};

    int val = 2;

    bool flag = false;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; i < 4; j++)
        {
            val += arr[j];
            if (val == paid)
            {
                cout << "Yes\n";
                flag = true;
                break;
            }
        }
        val = 2;
    }

    if (flag == false)
    {
        cout << "No\n";
    }

    return 0;
}