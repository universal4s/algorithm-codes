#include<bits/stdc++.h>
using namespace std;
#define LOCALa
#define ll long long int
#define inf 0x3f3f3f3f
#define po 1000000007
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=2e5+5;
ll a[maxn],b[maxn];
int n;
map<ll,ll> Hash;
ll gcd(ll a,ll b){
    return b==0?a:gcd(b,a%b);
}
ll PowMod(ll aa,int bb) {
    ll ret=1;
    while(bb) {
        if(bb&1)ret=ret*aa%po;
        aa=aa*aa%po;
        bb>>=1;
    }
    return ret;
}
ll inv(ll a){
    return PowMod(a,po-2);
}
void solve(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%lld",a+i);
    for(int i=0;i<n;i++) scanf("%lld",b+i);
    ll g=0,_max=0,cnt=0, x;
    for(int i=0;i<n;i++){
        g=gcd(a[i],b[i]);
        if(g!=0){
            a[i]/=g;
            b[i]/=g;
        }
        if(a[i]==0){
            if(b[i]==0){
                cnt++;
            }
            else continue;
        }     
        else {
            if(b[i]==0){
                Hash[0]++;
                _max=max(_max,Hash[0]);
            }
            else{
                ll t=inv(a[i]);
                x=-b[i]*t;
                Hash[x]++;
                _max=max(_max,Hash[x]);
            }
        }
    }
    printf("%lld",_max+cnt);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}