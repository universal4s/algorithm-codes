#include<bits/stdc++.h>
using namespace std;
#define LOCALa
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
char s[65555];
int n;
void solve(){
    scanf("%d",&n);
    scanf("%s",s);
    int sum=0;
    for(int i=0;i<n;i++){
        if((s[i]-'0')%2==0){
            sum+=(i+1);
        }
    }
    printf("%d\n",sum);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}