#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int a[maxn];
int sc[105];
void solve(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        sc[a[i]]++;
    }
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%d",&n);
        if(i) putchar(' ');
        printf("%d",sc[n]);
    }
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}