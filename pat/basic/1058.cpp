#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int sc[1005],cw[maxn];
struct ti{
    vector<char> v;
    int n;
    int xx;
    int _max;
}t[105];
void solve(){
    int n,m;
    scanf("%d %d",&n,&m);
    char x;
    int p;
    for(int i=0;i<m;i++){
        scanf("%d %d %d",&t[i]._max,&t[i].xx,&t[i].n);
        while(x!='\n'){
            x=getchar();
            if(isalpha(x)){
                t[i].v.push_back(x);
            }
        }
        x=0;
    }

    int y;
    int _max=-1;
    for(int i=0;i<n;i++){
        for(int z=0;z<m;z++){
            // scanf("%c",&x); 
            while(x!='(') x=getchar();
            if(x=='('){
                scanf("%d",&y);
                int cnt=0;
                while(x!=')'){
                    x=getchar();
                    if(isalpha(x)&&find(t[z].v.begin(),t[z].v.end(),x)!=t[z].v.end()){
                        cnt++;
                    }
                }
                if(cnt==t[z].n&&cnt==y){
                    sc[i]+=t[z]._max;
                }
                else {
                    cw[z]++;
                    _max=max(cw[z],_max);
                }
            }
        }
        printf("%d\n",sc[i]);
    }
    int cnt=0;
    vector<int> ans;
    for(int i=0;i<m;i++){
        if(cw[i]==_max){
            ans.push_back(i+1);
            cnt++;
        }
    }
    if(_max==-1){
        printf("Too simple\n");
    }
    else {
        printf("%d",_max);
        for(int i=0;i<cnt;i++){
            printf(" %d",ans[i]);
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