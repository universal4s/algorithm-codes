#include <bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a, b) memset(a, b, sizeof(a))
const int maxn = 1e5 + 5;
int a[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char m[15] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
bool islegal(string s)
{
    int ret = 0;
    for (int i = 0; i < 17; i++)
    {
        if(isalpha(s[i])) return false;
        ret += (s[i] - '0')*a[i];
    }
    ret %= 11;
    return s[17] == m[ret];
}
void solve()
{
    int n;
    // scanf("%d",&n);
    cin >> n;
    string s;
    vector<string> ans;
    for (int kase = 0; kase < n; kase++)
    {
        cin >> s;
        if (!islegal(s))
        {
            ans.push_back(s);
        }
    }
    if (!ans.size())
    {
        cout << "All passed\n";
    }
    else
    {
        // cout<<ans.size()<<endl;
        for (auto x : ans)
            cout << x << endl;
    }
}
int main()
{
#ifdef LOCAL
    freopen("in.in", "r", stdin);
#endif
    solve();
    return 0;
}