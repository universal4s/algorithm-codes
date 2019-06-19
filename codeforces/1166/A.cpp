/******************************************
    > File Name: A.cpp
    > Author: universal42
    > Mail: universal42@163.com 
    > Created Time: 2019年05月24日 星期五 08时54分04秒
 ******************************************/

#include<bits/stdc++.h>
#define ll long long int
#define inf 0x3f3f3f3f
#define LOCAL
using namespace std;
const int maxn=1e5+5;
int n;
int num[26];
char s[25];
int C(int n){
	
	return n*(n-1)/2;

}
void solve(){
    scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",s);
		num[s[0]-'a']++;
	}
	int cnt=0;
	for(int i=0;i<26;i++){
		if(num[i]){
				int t=num[i]/2;
				int tt=num[i]-t;
				cnt+=C(t);
				cnt+=C(tt);
		}
	}
	printf("%d\n",cnt);
}
int main(){
#ifdef LOCAL
    freopen("in.in","r",stdin);
#endif
    solve();
    return 0;
}
