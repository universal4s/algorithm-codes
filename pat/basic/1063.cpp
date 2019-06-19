#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;

void solve(){
    int n;
    scanf("%d",&n);
    double _max=-1;
    int a,b;
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        _max=max(_max,sqrt(a*a+b*b));
    }
    printf("%.2lf\n",_max);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}