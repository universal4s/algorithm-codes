#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int a[10];
void solve(){
    for(int i=0;i<10;i++) scanf("%d",a+i);
    vector<int> v;
    for(int i=0;i<10;i++){
        if(a[i]){
            for(int j=0;j<a[i];j++){
                v.push_back(i);
            }
        }
    }
    sort(v.begin(),v.end());
    if(v[0]==0){
        int i=0;
        while(v[i]==0) i++;
        swap(v[0],v[i]);
    }
    for(auto x:v){
        printf("%d",x);
    }
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}