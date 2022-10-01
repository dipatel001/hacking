#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x;
    cin >> x;
    int ans = 0;
    
    for(int j=0;j<x;j++)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '+')
            {
                ans++;
                break;
            }
            else if (s[i] == '-')
            {
                ans--;
                break;
            }
            else
            {
                ans = ans;
            }
        }
    }
    cout << ans << endl;
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
