#include<bits/stdc++.h>
using namespace std;
#define LOCALs
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=3e5+5;
pair<ll,ll> p[maxn];
priority_queue<ll,vector<ll>,greater<ll> >q;
bool cmp(pair<ll,ll> &a ,pair<ll,ll> &b){
    return a.second>b.second;
}
void solve(){
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++) 
        scanf("%lld %lld",&p[i].first,&p[i].second);
    sort(p,p+n,cmp);
    ll sum=0;
    ll ans=-1;
    for(int i=0;i<n;i++){
        sum+=p[i].first;
        q.push(p[i].first);
        if(i>k-1){
            sum-=q.top();
            q.pop();
        }
        ans=max(sum*p[i].second,ans);
    }
    printf("%lld\n",ans);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}