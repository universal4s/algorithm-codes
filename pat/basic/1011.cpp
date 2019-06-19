#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;

void solve(){
    int t;
    cin>>t;
    int idx=1;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        cout<<"Case #"<<idx++<<": "<<(a+b>c?"true\n":"false\n");
    }
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}