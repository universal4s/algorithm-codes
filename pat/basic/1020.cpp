#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int n,d;
struct node{
    double a,b;
}s[1005];
bool cmp(node a,node b){
    return a.b*1.0/a.a>b.b*1.0/b.a; 
}
void solve(){
    scanf("%d%d",&n,&d);
    double sum=0;
    for(int i=0;i<n;i++){
        scanf("%lf",&s[i].a);
        sum+=(double)s[i].a;
    }
    for(int i=0;i<n;i++){
        scanf("%lf",&s[i].b);
    }
    sort(s,s+n,cmp);
    int i=0;
    double cur=0;
    while(i<n&&d){
        if(s[i].a<=d){
            cur+=s[i].b;
            d-=s[i].a;
        }
        else {
            cur+=d*s[i].b/s[i].a;
            break;
        }
        i++;
    }
    printf("%.2lf\n",cur);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    
    solve();
    return 0;
}