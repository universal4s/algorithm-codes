#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int a[10];
char s[1005];
void solve(){
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0;i<len;i++){
        a[s[i]-'0']++;
    }
    for(int i=0;i<10;i++){
        if(a[i]) printf("%d:%d\n",i,a[i]);
    }
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}