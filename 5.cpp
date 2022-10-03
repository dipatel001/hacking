#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y,z;
    cin>>x>>y>>z;
    int ans=max(abs(x-y),max(abs(y-z),abs(z-x)));
    cout<<ans<<endl;


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
