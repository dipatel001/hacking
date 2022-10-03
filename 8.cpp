#include <bits/stdc++.h>
using namespace std;
void solve()
{
   int n;
   cin>>n;
   int ans=0;
   for(int i=0;i<n;i++)
   {
    string s;
    cin>>s;
    if(s=="Tetrahedron")ans=ans+4;
    else if(s=="Cube")ans=ans+6;
    else if(s=="Octahedron")ans=ans+8;
    else if(s=="Dodecahedron")ans=ans+12;
    else ans=ans+20;

   }

    cout<<ans<<endl;



return;
}

int main()
{
    int t;
    //cin >> t;
     t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
