#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;

void solve(){
    int a,da,b,db;
    scanf("%d %d %d %d",&a,&da,&b,&db);
    int sa=0;
    while(a){
        if(a%10==da) sa=(sa*10)+da;
        a/=10;
    }
    int sb=0;
    while(b){
        if(b%10==db) sb=(sb*10)+db;
        b/=10; 
    }
    printf("%d\n",sa+sb);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    
    solve();
    return 0;
}