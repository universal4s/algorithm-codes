#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;

void solve(){
    int t,k;
    scanf("%d%d",&t,&k);
    int n1,b,tt,n2;
    for(int i=0;i<k;i++){
        scanf("%d%d%d%d",&n1,&b,&tt,&n2);
        if(tt>t){
            printf("Not enough tokens.  Total = %d.\n",t);
        }
        else if(n1<n2&&b){
            printf("Win %d!  Total = %d.\n",tt,t+=tt);
        }
        else if(n1>n2&&!b){
            printf("Win %d!  Total = %d.\n",tt,t+=tt);
        }
        else {
            printf("Lose %d.  Total = %d.\n",tt,t-=tt);
        }
        if(t<=0){
            printf("Game Over.\n");
            return ;
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