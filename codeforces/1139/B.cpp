#include<bits/stdc++.h>
using namespace std;
#define LOCALa
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=2e5+5;
int a[maxn];
int n;
void solve(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        scanf("%d",a+i);
    }
    ll sum=(ll)a[n];
    int pre=a[n];
    for(int i=n-1;i>0;i--){
        if(pre-1>=0){
            sum+=(ll)min(pre-1,a[i]);
            pre=min(pre-1,a[i]);

        }
        else break;
    }
    printf("%lld\n",sum);

}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}