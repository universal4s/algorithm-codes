#include<bits/stdc++.h>
using namespace std;
#define LOCALa
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int a[maxn],sz;
void solve(){
    int n,x;
    scanf("%d",&n);
    int pre=1,cnt=0;
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(x==pre){
            cnt++;
        }
        else {
            a[sz++]=cnt;
            cnt=1;
        }
        pre=x;
    }
    a[sz++]=cnt;
    int _max=-1;
    for(int i=1;i<sz;i++){
        _max=max(_max,2*min(a[i],a[i-1]));
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