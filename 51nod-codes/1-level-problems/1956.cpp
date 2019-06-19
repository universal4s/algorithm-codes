#include <bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a, b) memset(a, b, sizeof(a))
const int maxn = 1e5 + 5;
const int N = 100;
int n;
char o[] = "OMG";
int getValue(int b, int c, int d)
{
    return b * b * b + c * c * c + d * d * d;
}
int cubic[105];
map<int, int> Hash;
void init()
{
    for (int i = 2; i <= 100; i++)
    {
        Hash[i * i * i] = i;
    }
}
void solve()
{
    init();
    cin >> n;
    bool flag = 0;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= n; j++)
        {
            for (int k = j + 1; k <= n; k++)
            {
                int p=Hash[i*i*i-j*j*j-k*k*k];
                if(p>k)
                {
                    flag=1;
                    printf("(%d,%d,%d,%d)\n",i,j,k,p);
                }
            }
        }
    }
    if(!flag) printf("%s\n",o);
}
int main()
{
#ifdef LOCAL
    freopen("in.in", "r", stdin);
    // freopen("out.out", "w", stdout);
#endif
    solve();
    return 0;
}