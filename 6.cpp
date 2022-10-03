#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int ans=0,i=0;
    vector<int>v(10000,0);
    while(n>0)
    {
        if(n%10!=0)
        {
            ans++;
            v[i]=n%10;
        }
        i++;
        n=n/10;
    }
    cout<<ans<<endl;
    // reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(v[i]!=0)
        {
            cout<<v[i]*pow(10,i)<<" ";
        }
    }
    cout<<endl;


return;
}

int main()
{
    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
