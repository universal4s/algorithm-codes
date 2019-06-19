#include <bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a, b) memset(a, b, sizeof(a))
const int maxn = 1e5 + 5;
int aa[26], bb[26];
void solve()
{
    string a, b;
    cin >> a >> b;
    set<char> s;
    // s.insert()
    int lena = a.length();
    int lenb = b.length();
    int j = 0;
    vector<char> v;
    int i = 0;
    for (i; i < lenb; i++)
    {
        for (; j < lena; j++)
        {
            if (a[j] != b[i])
            {
                // if(isalpha(a[j])) s.insert(toupper(a[j]));
                // else s.insert(a[j]);
                if (isalpha(a[j]))
                {
                    if (find(v.begin(), v.end(), toupper(a[j])) != v.end())
                    {
                        continue;
                    }
                    else
                        v.push_back(toupper(a[j]));
                }
                else
                {
                    if (find(v.begin(), v.end(), a[j]) != v.end())
                    {
                        continue;
                    }
                    else
                        v.push_back(a[j]);
                }
            }
            else
            {
                j++;
                break;
            }
        }
    }
    for (; j < lena; j++)
    {
        if (isalpha(a[j]))
        {
            if (find(v.begin(), v.end(), toupper(a[j])) == v.end())
            {
                v.push_back(toupper(a[j]));
            }
        }
        else
        {
            if (find(v.begin(), v.end(), a[j]) == v.end())
            {
                v.push_back(a[j]);
            }
        }
    }
    for (auto x : v)
    {
        cout << x;
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