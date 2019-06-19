#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<utility>
#include<cstring>
using namespace std;
#define LOCALa
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=2e5+5;
const ll MOD=998244353LL;
ll a[maxn],b[maxn];
int n;
void solve(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lld",a+i);
    }
    for(int i=0;i<n;i++){
        scanf("%lld",b+i);
    }
    for(int i=0;i<n;i++){
        a[i]=a[i]*(i+1)*(n-i);
    }
    sort(a,a+n,greater<ll>() );
    sort(b,b+n,less<ll>());
    ll ans=0;
    for(int i=0;i<n;i++){
        ans=(ans+(a[i]%MOD*b[i]%MOD)%MOD)%MOD;
    }   
    printf("%lld\n",ans);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
    freopen("out.out","w",stdout);
#endif
    solve();
    return 0;
}