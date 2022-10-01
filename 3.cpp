#include <bits/stdc++.h>
using namespace std;

void solve()
{
    	int a[5][5];
        int xx=0,yy=0;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cin>>a[i][j];
                if(a[i][j]==1)
                {
                    xx=i;
                    yy=j;
                }
            }
        }
        cout<<abs(xx-2)+abs(yy-2)<<endl;









        
        return ;
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
