#include<bits/stdc++.h>
using namespace std;
#define LOCALa
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=5e5+5;
int n,m;
int fa[maxn];
int a[maxn];
int num[maxn];
void init(){
    for(int i=0;i<maxn;i++){
        fa[i]=i;
    }
}
int find(int x){
    if(fa[x]==x){
        return x;
    }
    return fa[x]=find(fa[x]);
}
bool same(int x,int y){
    return find(x)==find(y);
}
void merge(int x,int y){
    int fx=find(x),fy=find(y);
    if(fx!=fy) fa[fx]=fy;
}
void solve(){
    init();
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        int k,x;
        scanf("%d",&k);
        for(int j=0;j<k;j++){
            scanf("%d",a+j);
        }
        for(int j=0;j<k;j++){
            merge(a[j],a[0]);
        }
        
    }
    for(int i=0;i<n;i++){
        find(i+1);
    }
    for(int i=0;i<n;i++){
        num[fa[i+1]]++;
    }
    for(int i=0;i<n;i++){
        if(i) printf(" ");
        printf("%d",num[fa[i+1]]);
    }
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}