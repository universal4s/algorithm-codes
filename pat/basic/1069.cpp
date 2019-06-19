#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;

void solve(){
    int m,n,s;
    cin>>m>>n>>s;
    string ss;
    map<string,bool> ct;
    int cnt=0;
    int flag=0;
    int i=0;
    for(i=0;i<s-1;i++) cin>>ss;
    for(;i<m;i++){
        cin>>ss;
        if(cnt%n==0&&ct[ss]){
            continue;
        }
        if(cnt%n==0&&ct[ss]==0){
            ct[ss]=1;
            cout<<ss<<endl;
            flag=1;
        }
        cnt++;
    }
    if(!flag) cout<<"Keep going...\n";
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}