#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
double sc[1005];
int cw[105],ka[105];//cw某个题的错误次数
struct ti{
    vector<char> v;//正确答案
    int n;//选项个数
    int xx;//正确选项个数
    int _max;//最大分值
    int a[5];//每个选项的错误次数
    int cnt=inf;//最大的错误次数
    //统计每个题目哪个选项错了
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
    for(int i=0;i<m;i++){
        fill(t[i].a,t[i].a+5,n);
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
                int p=0;
                while(x!=')'){
                    x=getchar();
                    if(isalpha(x)&&find(t[z].v.begin(),t[z].v.end(),x)!=t[z].v.end()){
                        t[z].a[x-'a']--;
                        cnt++;
                    }
                    else if(isalpha(x)){//选错了
                    
                        //错选的选项进行统计
                        // t[z].cnt=min(t[z].cnt,t[z].a[x-'a']);
                        p=1;
                    }
                }
                if(cnt<t[z].n&&!p){//没有全选
                    sc[i]+=t[z]._max/2.0;
                }
                else if(cnt==t[z].n&&cnt==y){
                    sc[i]+=t[z]._max;
                }
                else {
                    cw[z]++;
                    _max=max(cw[z],_max);
                }
            }
        }
        printf("%.1lf\n",sc[i]);
    }
    // for(int i=0;i<n;i++){
    //     printf("%.1lf ",sc[i]);
    // }
    int cnt=0;
    vector<int> ans;
    for(int i=0;i<m;i++){
        for(int j=0;j<t[i].n;j++){
            t[i].cnt=min(t[i].a[j],t[i].cnt);
        }
    }
    for(int i=0;i<m;i++){
        if(cw[i]==_max){
            ans.push_back(i);
            cnt++;
        }
    }
    if(_max==-1){
        printf("Too simple\n");
    }
    else {
        
        for(int i=0;i<m;i++){
            if(cw[i]==_max){
                // printf("%d ",_max);
                for(int k=0;k<5;k++){
                    if(t[i].a[k]==t[i].cnt)
                        printf("%d %d-%c\n",_max,i+1,k+'a'); 
                }
            }
            // printf(" %d",ans[i]);
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