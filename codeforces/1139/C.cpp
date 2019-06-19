#include<bits/stdc++.h>
using namespace std;
#define LOCALa
#define Mod 1000000007
#define ll long long int
#define mset(a,b) memset(a,b,sizeof(a))
#define INF 1e9
const int maxn=1e5+5;
vector<ll> g[maxn];
bool vis[maxn];
ll n,k;
ll pow_mod(ll a,ll b){
    ll ans=1;
    while(b){
        if(b&1) ans=(ans*a)%Mod;
        a=(a*a)%Mod;
        b>>=1; 
    }
    return ans%Mod;
}
ll dfs(ll x){
    ll ret=1;
    if(vis[x]) return 0;
    vis[x]=1;
    for(auto q:g[x]){
        if(!vis[q]) 
            ret+=dfs(q);
    }
    return ret;
}
int main() {
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif // LOCAL
    scanf("%lld%lld",&n,&k);
    int u,v,w;
    ll ans=0;
    // printf("%lld",ans);
    for(int i=0;i<n-1;i++){
        scanf("%d%d%d",&u,&v,&w);
        if(!w){
            g[u].push_back(v);
            g[v].push_back(u);
        }
    }
    ans=pow_mod(n,k);
    for(int i=1;i<=n;i++){
        ll d=dfs(i);
        ans=(ans-pow_mod(d,k)+Mod)%Mod;
    }
    printf("%lld\n",ans);
    return 0;
}