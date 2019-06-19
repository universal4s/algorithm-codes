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
    for(int i=0;i<n;i++) scanf("%d",a+i);
    sort(a,a+n);
    int cnt,t;
    // for(int i=0;i<n;i++) printf("%d ",a[i]);
    // printf("\n");
    for(int i=n;i>=1;i--){
        cnt=0;
        int j=n-1;
        while(a[j]>i&&j>=0) j--;
        if(n-j-1>=i){
            printf("%d\n",i);
            return ;
        }
    }
    printf("0\n");
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}