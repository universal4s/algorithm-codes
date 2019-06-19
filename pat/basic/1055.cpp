#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e4+5;
struct stu{
    char name[10];
    int sc;
}s[maxn],a[maxn];
bool cmp(const stu &a,const stu &b){
    if(a.sc==b.sc){
        return strcmp(a.name,b.name)>0;
    }
    return a.sc<b.sc;
}
void solve(){
    int n,k;
    scanf("%d%d",&n,&k);
    int t=n/k;
    int zj=t/2+1;
    for(int i=0;i<n;i++) scanf("%s %d",s[i].name,&s[i].sc);
    sort(s,s+n,cmp);
    int cur=n-1;
    for(int i=0;i<k;i++){
        int l=1,r=n/k;
        if(i==0) r=n/k+n%k;
        int mid=r/2+1;
        int q=mid-1,p=mid+1;
        a[mid]=s[cur--];
        while(q>=l||p<=r){
            if(q>=l){
                a[q--]=s[cur--];
            }
            if(p<=r){
                a[p++]=s[cur--]; 
            }
        }
        for(int j=0;j<r;j++){
            if(j)printf(" ");
            printf("%s",a[j+1].name);
        }
        printf("\n");
    }

}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}