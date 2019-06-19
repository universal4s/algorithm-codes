#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int a[maxn];
void solve(){
    int n;
    scanf("%d",&n);
    int id,sc;
    int _max=-1,x=0;
    for(int i=0;i<n;i++){
        scanf("%d%d",&id,&sc);
        a[id]+=sc;
        if(_max<a[id]){
            _max=a[id];
            x=id;
        }
    }
    printf("%d %d\n",x,_max);

}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}