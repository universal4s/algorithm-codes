#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int a[105],b[105];
int n;
int tmp[105];
void is(){
    int j;
    int x;
    int flag=0;
    for(int i=2;i<=n;i++){
        sort(a,a+i);
        if(flag){
            printf("Insertion Sort\n");
            for(int k=0;k<n;k++){
                if(k) printf(" ");
                printf("%d",a[k]);
            }
            return;
        }
        if(equal(a,a+n,b)){
            flag=1;
        }
    }
}

void ms(int l,int r){
    int flag=0;
    for(int i=2;;i<<=1){
        for(int j=0;j<n;j+=i){
            sort(a+j,a+(j+i<n?j+i:n));//每i个排序
        }
        if(flag){
            printf("Merge Sort\n");
            for(int i=0;i<n;i++){
                if(i) printf(" ");
                printf("%d",a[i]);
            }
            printf("\n");
            return;
        }
        if(equal(a,a+n,b)){
            flag=1;
        }
        if(i>n) break;
    }

}
void solve(){
    
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) scanf("%d",&b[i]);
    memcpy(tmp,a,sizeof(a));
    is();
    memcpy(a,tmp,sizeof(a));
    ms(0,n-1);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}