#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;

void solve(){
    int a,b,d;
    scanf("%d%d%d",&a,&b,&d);
    a=a+b;
    if(a==0) {
        printf("0\n");
        return ;
    }
    vector<int> v;
    while(a){
        v.push_back(a%d);
        a/=d;
    }
    int len=v.size();
    for(int i=len-1;i>=0;i--) printf("%d",v[i]);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}