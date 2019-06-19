#include<bits/stdc++.h>
using namespace std;
#define LOCALa
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int l[105],r[105];
void solve(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d%d",l+i,r+i);
        // l[L]=r;
    }
    int x;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(x>=l[i]&&x<=r[i]){
            printf("%d\n",n-i);
            break;
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