#include <bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define DEBUG
#define mset(a, b) memset(a, b, sizeof(a))
const int maxn = 2e5 + 5;
int n;
char s[maxn];
int c[maxn];
void solve()
{
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            c[i] = 1;
        }
        scanf("%s", s);
        int now = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                printf("%d", now);
                now ^= 1;
            }
            else
            {
                now ^= 1;
                printf("%d", now);
            }
        }
        printf("\n");
#ifdef DEBUGi
        printf("%d\n", dep);
#endif
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