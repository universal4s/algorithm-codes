#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int ans[2];
void solve(){
    int n;
    scanf("%d",&n);
    int s=0;
    int a,b,c,d;
    for(int i=0;i<n;i++){
        scanf("%d%d%d%d",&a,&b,&c,&d);
        s=a+c;
        if(b==s&&d==s){
            continue;
        }
        else if(b==s){
            ans[1]++;
        }
        else if(d==s){
            ans[0]++;
        }
    }
    printf("%d %d",ans[0],ans[1]);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}