#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
string int2s(int x){
    string s,t;
    if(x<0){
        s+='-';
        x=-x;
    }
    int cnt=0;
    while(x){
        t+=x%10+'0';
        x/=10;
        cnt++;
        if(cnt%3==0&&x){
            t+=",";
        }
    }
    for(int i=t.length()-1;i>=0;i--){
        s+=t[i];
    }
    return s;
}
void solve(){
    int a,b;
    scanf("%d %d",&a,&b);
    a=a+b;
    if(a==0){
        printf("0");
        return ;
    }
    string s=int2s(a);
    printf("%s",s.c_str());
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}