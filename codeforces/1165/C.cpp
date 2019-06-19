#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<utility>
#include<cstring>
using namespace std;
#define LOCALa
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=2e5+5;
int n;
char s[maxn];
int ans=0;
vector<char> cap;
bool check(){
    if(n&1) return false;
    for(int i=0;i<n;i+=2){
        if(s[i]==s[i+1]) return false;
    }
    return true;
}
void solve(){
    scanf("%d",&n);
    scanf("%s",s);
    //删除一些字符使得该字符串为good string
    if(!check()){
        for(int i=0;i<n;){
            cap.push_back(s[i]);
            int j=i;
            while(j<n&&s[j]==cap[cap.size()-1]){
                j++;
            }
            if(j==n) {
                cap.pop_back();
                break;
            }
            else {
                cap.push_back(s[j]);
                i=j+1;
            }
        }
        printf("%d\n",n-(int)cap.size());
        for(auto x:cap){
            printf("%c",x);
        }
        printf("\n");
    }
    else {
        printf("%d\n",0);
        puts(s);
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