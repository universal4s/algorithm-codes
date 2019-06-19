#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int n;
struct stu{
    char name[15];
    char id[15];
    int score;
}s[maxn];
bool cmp(const stu &a,const stu &b){
    return a.score>b.score;
}
void solve(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %s %d",&s[i].name,&s[i].id,&s[i].score);
    }
    sort(s,s+n,cmp);
    printf("%s %s\n",s[0].name,s[0].id);
    printf("%s %s\n",s[n-1].name,s[n-1].id);

}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}