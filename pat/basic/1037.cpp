#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
ll a[3],b[3];
ll Abs(ll x){
    return x<0?0-x:x;
}
void solve(){
    scanf("%lld.%lld.%lld %lld.%lld.%lld",&a[0],&a[1],&a[2],&b[0],&b[1],&b[2]);
    ll sum1=(a[0]*17+a[1])*29+a[2];
    ll sum2=(b[0]*17+b[1])*29+b[2];
    sum1=sum2-sum1;
    printf("%lld.%lld.%lld\n",sum1/(29*17),Abs(sum1/29%17),Abs(sum1%29));
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}