#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int n,m;
int a[105];;
void solve(){
    cin>>n>>m;
    int t,x;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++){
        t=a[0];
        for(int j=1;j<=n;j++){
            //循环右移
            //将当前保存的数挪到当前位置，保存下一个位置的数
            x=a[j%n];
            a[j%n]=t;
            t=x;
        }
    }
    for(int i=0;i<n;i++) 
    {   if(i) cout<<" ";
        cout<<a[i];
        
    }
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}