#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int a[1005];
void solve(){
    int n;
    int dw,dy,sc;
    scanf("%d",&n);
    int id=0;
    int _max=-1;
    for(int i=0;i<n;i++){
        scanf("%d-%d %d",&dw,&dy,&sc);
        a[dw]+=sc;
        if(a[dw]>_max){
            _max=a[dw];
            id=dw;
        }
    }
    printf("%d %d",id,_max);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}