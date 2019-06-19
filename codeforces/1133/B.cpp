#include<bits/stdc++.h>
using namespace std;
#define LOCALa
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=2e5+5;
// int d[maxn];
int m[105];
int n,k,x;
void solve(){
    scanf("%d %d",&n,&k);
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        x%=k;
        if(m[(k-x)%k]){
            sum+=2;
            m[(k-x)%k]--;
        }
        else {
            m[x]++;
        }
    }
    printf("%d",sum);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}