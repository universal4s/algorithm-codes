#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
double a[1005],b[1005];
void solve(){
    int k,x;
    double t;
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        scanf("%d%lf",&x,&t);
        a[x]=t;
    }
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        scanf("%d%lf",&x,&t);
        b[x]=t;
    }
    int cnt=0;
    int _max=0;
    for(int i=0;i<1005;i++){

        b[i]+=a[i];
        if(b[i]){
            cnt++;
            _max=i;
        }
    }
    printf("%d",cnt);
    for(int i=_max;i>=0;i--){
        if(b[i]){
            printf(" %d %.1lf",i,b[i]);
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