#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<utility>
#include<cstring>
#include<cmath>
using namespace std;
#define LOCALa
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=300+5;
int t,n;
int d[maxn];
bool isprime(int x){
    for(int i=2,len=sqrt(x*1.0+0.5);i<=len;i++){
        if(x%i==0) return false;
    }
    return true;
}
void get_div(ll x,set<ll> &cap){
    for(int i=2,len=sqrt(x*1.0+0.5);i<=len;i++){
        if(x%i==0){
            cap.insert(i);
            cap.insert(x/i);
        }
    }
}
void solve(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++) scanf("%d",d+i);
        sort(d,d+n);
        int len=n&1?n/2:(n/2-1);
        set<ll> s;
        for(int i=0;i<=len;i++){
            s.insert((ll)d[i]*d[n-i-1]);
        }
        if(s.size()==1){
            set<ll> cap;
            vector<ll> tmp;
            get_div(*s.begin(),cap);
            set<ll>::iterator it=cap.begin();
            while(it!=cap.end()){
                tmp.push_back(*it++);
            }
            sort(tmp.begin(),tmp.end());
            if(tmp.size()!=n){
                printf("-1\n");
                continue;
            }
            printf("%lld\n",(ll)*s.begin());
        }
        else {
            printf("-1\n");
        }
    }
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
    freopen("out.out","w",stdout);
#endif
    solve();
    return 0;
}