/******************************************
    > File Name: A.cpp
    > Author: universal42
    > Mail: universal42@163.com 
    > Created Time: 2019年05月22日 星期三 14时41分34秒
 ******************************************/

#include<bits/stdc++.h>
#define ll long long int
#define inf 0x3f3f3f3f
#define LOCALa
using namespace std;
const int maxn=2e5+5;
int n,x,y;
char s[maxn];
int ans=0;
void solve(){
	scanf("%d %d %d",&n,&x,&y);
	scanf("%s",s);
	for(int i=0;i<y;i++){
		if(s[n-i-1]=='1'){
			ans++;
		}
	}
	if(s[n-y-1]=='0') ans++;
	for(int i=n-y-2;i>=n-x;i--){
		if(s[i]=='1') ans++;
	}
	printf("%d\n",ans);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}
