#include <bits/stdc++.h>
using namespace std;
void solve()
{
   
   int n;
   cin>>n;
   int ans=0;
   int temp=0;
   for(int i=0;i<n;i++)
   {
        int a=0,b=0;
        cin>>a>>b;
        ans=max(ans,b-a+temp);
        temp=b-a;
        
        cout<<i+1<<" "<<temp<<endl;
   }
   cout<<ans;





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
