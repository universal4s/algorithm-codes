#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;

void solve(){
    int c1,c2;
    scanf("%d%d",&c1,&c2);
    int c=(c2-c1)*1.0/100+0.5;
    // printf("%d",c);
    printf("%02d:%02d:%02d\n",c/3600,(c/60)%60,c%60);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}