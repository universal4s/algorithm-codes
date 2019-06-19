#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int a[5];
void solve(){
    int n;
    scanf("%d",&n);
    int x;
    int z=1;
    int cnt=0;
    a[4]=-1;
    int flag=0;
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(x%5==0&&!(x&1)){
            a[0]+=x;
        }
        else if(x%5==1){
            flag=1;
            a[1]+=z*x;
            z*=-1;
        }
        else if(x%5==2){
            a[2]++;
        }
        else if(x%5==3){
            cnt++;
            a[3]+=x;
        }
        else if(x%5==4){
            a[4]=max(a[4],x);
        }
    }
    if(a[0]==0){
        printf("N ");
    }
    else {
        printf("%d ",a[0]);
    }
    if(a[1]==0&&!flag){
        printf("N ");
    }
    else {
        printf("%d ",a[1]);
    }
    if(a[2]==0){
        printf("N ");
    }
    else {
        printf("%d ",a[2]);
    }
    if(cnt==0){
        printf("N ");
    }
    else {
        printf("%.1lf ",1.0*a[3]/cnt);
    }
    if(a[4]==-1){
        printf("N");
    }
    else {
        printf("%d",a[4]);
    }
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}