#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int n;
char s[105];
void solve(){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        scanf("%s",s);
        int flag=0;
        for(int i=0;i<n;i++){
            if(s[i]=='8'&&n-i>=11){
                printf("YES\n");
                flag=1;
                break;
            }
        }
        if(flag) continue;
        printf("NO\n");
    }
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}