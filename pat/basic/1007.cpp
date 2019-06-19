#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
//dn=p(n+1)-pn
int vis[maxn];
int p[maxn],sz=0;
void eulor(){
    for(int i=2;i<=maxn;i++){
        if(!vis[i]) p[sz++]=i;
        for(int j=0;j<sz&&i*p[j]<=maxn;j++){
            vis[i*p[j]]=1;
            if(i%p[j]==0) break;
        }
    }
}
void solve(){
    eulor();
    // for(int i=0;i<100;i++) printf("%d ",p[i]);
    int n;
    cin>>n;
    // cout<<vis[410]<<endl;
    int cnt=0;
    for(int i=0;p[i+1]<=n;i++){
        if(p[i]+2==p[i+1]) cnt++;
    }
    cout<<cnt<<endl;
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}