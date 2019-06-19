#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;

void solve(){
    char s[1005];
    int b;
    scanf("%s %d",s,&b);
    int t=0;
    int len=strlen(s);
    if(len==1&&s[0]-'0'<=b){
        printf("0 %c\n",s[0]);
        return ;
    }
    char ans[1005];
    mset(ans,0);
    int cnt=0;
    for(int i=0;i<len;i++){
        t=t*10+s[i]-'0';
        if(t>=b){
            ans[cnt++]=t/b+'0';
            t=t%b;
        }
        else {
            ans[cnt++]='0';
        }
    }
    int n=0;
    while(ans[n]=='0') n++;
    printf("%s %d\n",ans+n,t);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}