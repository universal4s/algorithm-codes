#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int b[10];
struct stu{
    char name[10];
    vector<int> qj;
}s[1005];
map<int,int> ct;
void solve(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a;
    for(int i=0;i<m;i++){
        scanf("%d",&a);
        ct[a]=1;
    }
    int k,x,tol=0,num=0,flag=0;
    for(int i=0;i<n;i++){
        flag=0;
        scanf("%s%d",s[i].name,&k);
        for(int j=0;j<k;j++){
            scanf("%d",&x);
            if(ct[x]){
                flag=1;
                num++;
                s[i].qj.push_back(x);
            }
        }
        if(flag) tol++;
    }
    for(int i=0;i<n;i++){
        if(s[i].qj.size()!=0){
            printf("%s: ",s[i].name);
            for(int j=0;j<s[i].qj.size();j++){
                if(j) printf(" ");
                printf("%04d",s[i].qj[j]);
            }
            printf("\n");
        }
    }
    printf("%d %d\n",tol,num);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}