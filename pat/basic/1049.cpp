#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
double a[maxn];
void solve(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%lf",a+i);
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=(ll)(n-i)*(i+1)*a[i];
    }
    printf("%.2lf\n",sum);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}