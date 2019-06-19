#include<bits/stdc++.h>
using namespace std;
#define LOCALa
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=2e5+5;
int a[maxn],cnt[maxn];
void solve(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",a+i);
    sort(a,a+n);
    int _max=-1;
    for(int i=0;i<n;i++){
        while(i+cnt[i]<n&&a[i+cnt[i]]-a[i]<=5) cnt[i]++;
        _max=max(_max,cnt[i]);
    }
    // int flag=0,_max=1,cur=0,cnt=0; 
    // for(int i=0;i<n;i++){
    //     int p=upper_bound(a,a+n,a[i]+5)-a-1;
    //     _max=max(_max,p-i+1);
    // }
    printf("%d",_max);
}

int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}