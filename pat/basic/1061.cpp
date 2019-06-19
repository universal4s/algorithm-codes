#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int sc[105],a[105],da[105],fs[105],df[105];
void solve(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d",a+i);
    }
    for(int i=0;i<m;i++){
        scanf("%d",da+i);
    }
    int x;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&x);
            if(da[j]==x){
                sc[i]+=a[j];
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",sc[i]);
    }
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}