#include<bits/stdc++.h>
using namespace std;
#define LOCALa
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e4+5;
char s[maxn];
void solve(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        scanf("%s",s);
        int i=0,j=n-1;
        while(i<n&&s[i]!='>') i++;
        while(j>=0&&s[j]!='<') j--;
        if(i!=n&&j!=-1){
            printf("%d\n",min(i,n-j-1));
        }
        else if(i==n){
            printf("%d\n",n-j-1);
        }
        else if(j==-1){
            printf("%d\n",i);
        }
    }
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}