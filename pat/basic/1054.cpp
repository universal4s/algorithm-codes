#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
// double a[105];
bool islegal(char *s){
    int len=strlen(s);
    int i=0;
    if(s[i]=='-') i++;
    for(;s[i]!='.'&&i<len;i++){
        if(!isdigit(s[i])) return false;
    }
    if(s[i]=='.'){
        for(int j=i+1;j<len;j++){
            if(!isdigit(s[j])||j-i>2) return false;
        }
    }
    double t=atof(s);
    if(t<-1000.0||t>1000.0) return false;

    return true;
}
char s[10];
void solve(){
    int n;
    scanf("%d",&n);
    double sum=0;
    int cnt=0;
    double t;
    for(int i=0;i<n;i++) {
        scanf("%s",s);
        if(islegal(s)){
            t=atof(s);
            if(t>=-1000.0&&t<=1000.0){
                // printf("%s\n",s);
                cnt++;
                sum+=t;
            }
            else {
                printf("ERROR: %s is not a legal number\n",s);
            }
            
        }
        else {
            printf("ERROR: %s is not a legal number\n",s);
        }
    }
    if(cnt==0){
        printf("The average of 0 numbers is Undefined\n");
    }
    else if(cnt==1){
        printf("The average of 1 number is %.2lf\n",sum);
    }
    else printf("The average of %d numbers is %.2f\n",cnt,sum/cnt);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}