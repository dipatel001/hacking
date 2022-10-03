#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k,l,c,d,p,nl,np;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    cout<<min(min(k*l/nl,p/np),c*d)/n;


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
