#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;

void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n/100;i++){
        cout<<"B";
    }
    for(int i=0;i<(n/10)%10;i++){
        cout<<"S";
    }
    for(int i=1;i<=n%10;i++){
        cout<<i;
    }
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}