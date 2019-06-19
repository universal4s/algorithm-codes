#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;

void solve(){
    int x,m;
    vector<int> v;
    //输入多项式非零项系数和指数
    int flag=0;//0次项是否出现过
    while(cin>>x>>m){
        if(m>0){
            v.push_back(x*m);
            v.push_back(m-1);
            flag=1;
        }
    }
    int i=0;
    if(!flag) {
        if(i) cout<<" 0 0\n";
        else cout<<"0 0\n";
        return;
    }
    for(;i<v.size();i++){
        if(i) cout<<" ";
        cout<<v[i];
    }
    
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}