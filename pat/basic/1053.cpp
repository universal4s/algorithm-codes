#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int ksz=0;
int sz=0;
void solve(){
    int m,n,D,cnt=0,flag=0;;
    double e,x;
    scanf("%d%lf%d",&n,&e,&D);
    for(int Kase=0;Kase<n;Kase++){
        scanf("%d",&m);
        cnt=0;
        flag=0;
        for(int j=0;j<m;j++){
            scanf("%lf",&x);
            if(x<e){
                cnt++;
            }
        }
        if(cnt>m/2){
            flag=1;
        }
        if(flag){
            if(m>D) sz++;
            else ksz++;
        }

    }
    printf("%.1lf%% %.1lf%%",ksz*1.0/n*100,sz*1.0/n*100);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}