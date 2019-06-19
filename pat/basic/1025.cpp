#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
//我哭了
struct node{
    char add[10];
    int d;
    char next[10];
}q[maxn];
int char2int(char *s){
    int len=strlen(s);
    int ans=0;
    for(int i=0;i<len;i++){
        ans=ans*10+s[i]-'0';
    }
    return ans;
}
void solve(){
    char first[10];
    mset(first,0);
    int n,k;
    scanf("%s %d %d",first,&n,&k);
    char add[10];
    int id=0;
    for(int i=0;i<n;i++){
        scanf("%s",add);
        id=char2int(add);
        scanf("%d %s",&q[id].d,q[id].next);
        strcpy(q[id].add,add);
    } 
    char next[10];
    strcpy(next,first);
    vector<node> v;
    vector<node> ans;
    vector<node> res;
    while(strcmp(next,"-1")){
        id=char2int(next);
        v.push_back(q[id]);
        if((int)v.size()==k){
            for(int i=k-1;i>=0;i--){
                res.push_back(v[i]);
            }
            while(!v.empty()) v.pop_back();
        }
        strcpy(next,q[char2int(next)].next);
    }
    for(int i=0;i<res.size()-1;i++){
        // res[i].next=res[i+1].add;
        strcpy(res[i].next,res[i+1].add);
    }
    if(res.size()==n){
        strcpy(res[n-1].next,"-1");
    }
    else {
        strcpy(res[res.size()-1].next,v[0].add);
    }
    for(auto x:res){
        printf("%s %d %s\n",x.add,x.d,x.next);
    }
    for(auto x:v){
        printf("%s %d %s\n",x.add,x.d,x.next);
    }
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}