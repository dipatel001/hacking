#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>>v(n,vector<char>(m,'.'));
    int x=0;
    for(int i=0;i<n;i++)
    {
         if(i%2!=0)
            {
                if(x==0)
                {
                     v[i][m-1]='#';
                     x=1;
                }
                else
                {
                     v[i][0]='#';
                     x=0;
                }
                
            }
            else
            {
        for(int j=0;j<m;j++)
        {
           
            v[i][j]='#';
        }
            }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }
    







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
