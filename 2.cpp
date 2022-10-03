#include <bits/stdc++.h>
using namespace std;
void solve()
{
    	string s;
	cin >> s;
	for(int i{}; i < s.size(); ++i){
		if(i == 0 && s[i] == '9')
			continue;
		if(s[i] >= '5')
			s[i] = '0' + ('9'-s[i]);
	}
 
		cout << s<< '\n';
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
