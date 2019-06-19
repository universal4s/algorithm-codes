#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
ll a[maxn];

void solve(){
    int n,p;
    scanf("%d%d",&n,&p);
    for(int i=0;i<n;i++) scanf("%lld",a+i);
    sort(a,a+n);
    int x;
    int _max=-1;
    for(int i=0;i<n;i++){
        x=upper_bound(a,a+n,a[i]*p)-a-1;
        if(x!=n){
            _max=max(_max,x-i+1);
        }
    }    
    printf("%d\n",_max);

}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}