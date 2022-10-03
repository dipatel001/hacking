#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int nn;
    cin >> nn;
    vector<int> v(nn);
    int m = INT_MIN, n = INT_MAX, mi = 0, ni = 0;
    for (int i = 0; i < nn; i++)
    {
        cin >> v[i];
        if (v[i] <= n)
        {
            ni = i;
            n = v[i];
        }
        if (v[i] >m)
        {
            mi = i;
            m = v[i];
        }
    }
    // cout << mi << " " << ni << endl;
    // cout << m << " " << n << endl;
    if(mi>ni)
    {
        cout<<mi-0+nn-1-ni-1;
    }
    else
    {
        cout<<mi-0+nn-1-ni;
    }

    return;
}

int main()
{
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
