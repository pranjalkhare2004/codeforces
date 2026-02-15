#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 67)
            {
                found = true;
            }
        }
        if (found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}