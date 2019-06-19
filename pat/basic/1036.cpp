#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;

void solve(){
    int n;
    char x;
    scanf("%d %c",&n,&x);
    int h=n*0.5+0.5;
    for(int i=0;i<n;i++){
        printf("%c",x);
    }
    putchar('\n');
    for(int i=0;i<h-2;i++){
        putchar(x);
        for(int k=0;k<n-2;k++) putchar(' ');
        putchar(x);
        putchar('\n');
    }
    for(int i=0;i<n;i++){
        printf("%c",x);
    }
    putchar('\n');
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}