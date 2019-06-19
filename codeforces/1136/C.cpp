#include<bits/stdc++.h>
// #include<set>
using namespace std;
#define LOCALa
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=5e2+5;
int A[maxn][maxn],B[maxn][maxn];
void solve(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&B[i][j]);
        }
    }
    vector<int> st[1005],st2[1005];
    int len=n+m-1;
    for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                st[j+k].push_back(A[j][k]);
            }
    }
    for(int i=0;i<len;i++){
        
        sort(st[i].begin(),st[i].end());
    }
    for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                st2[j+k].push_back(B[j][k]);
            }
    }
    for(int i=0;i<len;i++){
        
        sort(st2[i].begin(),st2[i].end());
    }
    for(int i=0;i<len;i++){
        if(st[i].size()==st2[i].size()){
            int t=st[i].size();
            for(int k=0;k<t;k++){
                if(st[i][k]!=st2[i][k]){
                    printf("NO\n");
                    return;
                }
            }
        }
    }
    printf("YES\n");
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}