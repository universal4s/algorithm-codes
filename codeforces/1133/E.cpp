#include<bits/stdc++.h>
using namespace std;
#define LOCALa
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=5e3+5;
int a[maxn],cnt[maxn],dp[maxn][maxn];
void solve(){
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++) scanf("%d",a+i);
    // dp[0][0]=0;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        while(i+cnt[i]<n&&a[i+cnt[i]]-a[i]<=5) cnt[i]++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=k;j++){
            dp[i+1][j]=max(dp[i+1][j],dp[i][j]);//不考虑当前数
            if(j+1<=k){//以i为第一个学生，增加队伍数
                dp[i+cnt[i]][j+1]=max(dp[i+cnt[i]][j+1],dp[i][j]+cnt[i]);
            }
        }
    }
    printf("%d\n",dp[n][k]);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}