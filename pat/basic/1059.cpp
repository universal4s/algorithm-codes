#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e4+5;
int a[maxn];
int prime[maxn];
int vis[maxn];
void init(){
    int p=sqrt(maxn+0.5);
    for(int i=2;i<=p;i++){
        for(int j=i*i;j<maxn;j+=i){
            prime[j]=1;
        }
    }
}
void solve(){
    init();
    int n,k;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>k;
    int x;
    int idx=0;
    for(int i=0;i<k;i++){
        cin>>x;
        if(find(a,a+n,x)!=a+n){
            idx=find(a,a+n,x)-a+1;
            if(vis[idx]){
                printf("%04d: Checked\n",x);
            }
            else if(idx==1&&!vis[idx]){
                vis[idx]=1;
                printf("%04d: Mystery Award\n",x);
            }
            else if(!prime[idx]&&!vis[idx]){
                vis[idx]=1;
                printf("%04d: Minion\n",x);
            }
            else {
                vis[idx]=1;
                printf("%04d: Chocolate\n",x);
            }
        }
        else {
            printf("%04d: Are you kidding?\n",x);
        }
        
    }
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}