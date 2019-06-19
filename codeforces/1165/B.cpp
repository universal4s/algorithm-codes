#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<utility>
#include<cstring>
using namespace std;
#define LOCALa
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=2e5+5;
int n;
int a[maxn];
void solve(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",a+i);
    sort(a,a+n);
    int ans=0;
    for(int i=0,j=0;j<n&&i<n;i++){
        while(j<n&&a[j]<(i+1)){
            j++;
        }
        if(a[j]>=i+1){
            ans++;
            j++;
        }
    }
    printf("%d\n",ans);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
    freopen("out.out","w",stdout);
#endif
    solve();
    return 0;
}