#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
map<int,int> mp;
// string aa[10005];
int arr[100005];

void solve(){
    int n;
    // scanf("%d",&n);
    mset(arr,-1);
    // cin>>n;
    scanf("%d",&n);
    int a,b;
    for(int i=0;i<n;i++){
        // cin>>a>>b;
        scanf("%d%d",&a,&b);
        arr[a]=b;
        arr[b]=a;
    }
    int m;
    // cin>>m;
    scanf("%d",&m);
    vector<int> v,ans;
    for(int i=0;i<m;i++){
        // cin>>a;
        scanf("%d",&a);
        v.push_back(a);
        mp[a]=1;
    }

    for(int i=0;i<m;i++){
        if(!mp[arr[v[i]]]){
            ans.push_back(v[i]);
        }
    }
    sort(ans.begin(),ans.end());
    // cout<<ans.size()<<endl;
    printf("%d\n",(int)ans.size());
    for(int i=0;i<ans.size();i++){
        if(i) printf(" ");
        printf("%05d",ans[i]);
    }
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}