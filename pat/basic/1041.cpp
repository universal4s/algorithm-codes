#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
string stu[1005];
map<int,int> mp;
void solve(){
    int n;
    cin>>n;
    string id;
    int x,y;
    for(int i=0;i<n;i++) {
        cin>>id>>x>>y;
        mp[x]=y;
        stu[y]=id;
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>x;
        cout<<stu[mp[x]]<<" "<<mp[x]<<endl;
    }
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}