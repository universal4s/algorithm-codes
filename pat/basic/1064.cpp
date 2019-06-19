#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e4+5;
int a[maxn];
int bitAdd(int x){
    int ans=0;
    while(x){
        ans+=x%10;
        x/=10;
    }
    return ans;
}
void solve(){
    int n;
    scanf("%d",&n);
    int x;
    for(int i=0;i<n;i++){
        // scanf("%d",a+i);
        scanf("%d",&x);
        a[bitAdd(x)]++;
    }
    int flag=0;
    vector<int> v;
    for(int i=0;i<=10000;i++){
        if(a[i]){
            // if(flag) printf(" ");

            // printf("%d",i);
            v.push_back(i);
        }
    }
    printf("%d\n",(int)v.size());
    for(int i=0;i<v.size();i++){
        if(i) printf(" ");
        printf("%d",v[i]);
    }
    
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}