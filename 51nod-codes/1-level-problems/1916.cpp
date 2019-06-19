#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a, b) memset(a, b, size(of(a))
#define min(a, b) a < b ? a : b
#define pi acos(-1)
const int maxn = 1e5 + 5;
int T;
int X, L, Z;
char y[] = "YES";
char n[] = "NO";
void solve()
{
    cin >> T;
    while (T--)
    {
        cin >> X >> L >> Z;
        Z = Z>180?360-Z:Z;
        double len = 1.0 * Z * X * pi / 180; //到超市的距离

        // double gohome = min(len, (360.0 - Z) * X * pi / 180);
        double gohome = len * 2;

        double l = L * 5.0;

        if (gohome  > l)
        {
            cout << n << "\n";
        }
        else
        {
            cout << y << "\n";
        }
    }
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