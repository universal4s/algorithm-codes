#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int a[1005];
void solve(){
    int n;
    char x;
    scanf("%d %c",&n,&x);
    a[0]=1;
    int t=3;
    int tmp=0;
    for(int i=1;i<=50;i++)
    {
        a[i]=a[i-1]+t*2;
        if(a[i-1]<=n&&a[i]>n){
            tmp=a[i-1];
            t-=2;
            break;
        }
        t+=2;
        
    }
    int p=t;
    int _max=t;
    for(;t>=1;){
        for(int i=0;i<(_max-t)/2;i++) printf(" ");
        for(int i=0;i<t;i++){
            printf("%c",x);
        }
        printf("\n");
        t-=2;
    }
    t+=4;
    for(;t<=_max;){
        for(int i=0;i<(_max-t)/2;i++) printf(" ");
        for(int i=0;i<t;i++) printf("%c",x);
        printf("\n");
        t+=2;
    }
    printf("%d",n-tmp);


}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}