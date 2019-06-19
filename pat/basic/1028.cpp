#include <bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a, b) memset(a, b, sizeof(a))
const int maxn = 1e5 + 5;
char base[20] = "2014/09/06";
struct node
{
    char name[10];
    int a, b, c;
} q[maxn];
bool cmp(node &a, node &b)
{
    if (a.a == b.a)
    {
        if (a.b == b.b)
        {
            if (a.c == b.c)
            {
                return strcmp(a.name, b.name);
            }
            else
                return a.c < b.c;
        }
        else
            return a.b < b.b;
    }
    else
        return a.a < b.a;
}
void solve()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    char name[10];
    char x[20];
    int a, b, c;
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d/%d/%d", name, &a, &b, &c);

        if (a >= 2014)
        {
            if (a == 2014)
            {
                if (b >= 9)
                {
                    if (b == 9)
                    {
                        if (c > 6)
                        {
                            continue;
                        }
                    }
                    else
                        continue;
                }
            }
            else
                continue;
        }
        if (a <= 1814)
        {
            if (a == 1814)
            {
                if (b <= 9)
                {
                    if (b == 9)
                    {
                        if (c < 6)
                        {
                            continue;
                        }
                    }
                    else continue;
                }
            }
            else
                continue;
        }
        strcpy(q[cnt].name, name);
        q[cnt].a = a;
        q[cnt].b = b;
        q[cnt++].c = c;
    }
    sort(q, q + cnt, cmp);
    if(cnt==0) printf("0");
    else printf("%d %s %s", cnt, q[0].name, q[cnt - 1].name);
}
int main()
{
#ifdef LOCAL
    freopen("in.in", "r", stdin);
#endif
    solve();
    return 0;
}