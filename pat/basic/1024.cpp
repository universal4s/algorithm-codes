#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
char s[maxn];
void solve(){
    scanf("%s",s);
    int len=strlen(s);
    int e=find(s,s+len,'E')-s;
    int dot=find(s,s+len,'.')-s;
    int flag=0;
    if(s[e+1]=='-'){
        flag=1;
    }
    vector<int> h;
    int p=0;
    for(int i=e+2;i<len;i++){
        p=p*10+s[i]-'0';
    }
    if(s[0]=='-'){
        printf("-");
    }
    
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}