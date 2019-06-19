#include <bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a, b) memset(a, b, sizeof(a))
const int maxn = 1e5 + 5;
char s[10];
int char2int(char *x)
{
    int ans = 0;
    for (int i = 0; i < 4; i++)
    {
        ans = ans * 10 + (x[i] - '0');
    }
    return ans;
}
void int2char(int x)
{
    char ans[10] = {0};
    for (int i = 0; i < 4; i++)
    {
        ans[i] = x % 10 + '0';
        x /= 10;
    }
    strcpy(s, ans);
}
bool cmp(char x, char y)
{
    return x > y;
}
int mp[10];
void solve()
{
    int n;
    scanf("%d", &n);
    int2char(n);
    int ab=n;
    int a, b;
    while (1)
    {
        sort(s, s + 4, cmp);
        a = char2int(s);
        sort(s, s + 4);
        b = char2int(s);
        ab = a - b;
        printf("%04d - %04d = %04d\n", a, b, ab);
        if (ab == 0 || ab == 6174)
            break;
        int2char(ab);

    }

}
int main()
{
#ifdef LOCAL
    freopen("in.in", "r", stdin);
    // freopen("out.out","w",stdout);

#endif
    solve();
    return 0;
}