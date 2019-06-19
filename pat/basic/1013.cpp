#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=200000+5;
int vis[maxn];
int p[maxn],sz=0;
void eulur(){
    for(int i=2;i<=maxn;i++){
        if(!vis[i]) p[sz++]=i;
        for(int j=0;j<sz&&i*p[j]<=maxn;j++){
            vis[i*p[j]]=1;
            if(i%p[j]==0) break;
        } 
    }
}
void solve(){
    eulur();
    int m,n;
    cin>>m>>n;
    vector<int> v;
    for(int i=m;i<=n;i++){
        v.push_back(p[i-1]);
    }
    int len=v.size();
    for(int i=0;i<len;i++){
        if(i%10==0&&i) cout<<"\n";
        if(i%10) cout<<" ";
        cout<<v[i];
    }
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}