#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
int string2int(string s){
    int ans=0;
    for(int i=0;i<s.length();i++)
    {
        ans=ans*10+s[i]-'0';
    }
    return ans;
}
string sz[13]={"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
// string jw[12]={"tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
string jw[12]={"tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
void solve(){
    int n;
    cin>>n;
    string a,b;
    int x;
    for(int i=0;i<n;i++){
        cin>>a;
        // getline(cin,a);
        if(isdigit(a[0])){
            x=string2int(a);
            if(x>12){
                cout<<jw[x/13-1];
                if(x%13){
                    cout<<" ";
                    cout<<sz[x%13]<<endl;
                }
                else cout<<endl;
            }
            else {
                cout<<sz[x]<<endl;
            }
        }
        else {
            if(find(jw,jw+12,a)!=jw+12){
                char x=getchar();
                if(x==' '){
                    cin>>b;
                    cout<<(find(jw,jw+12,a)-jw+1)*13+(find(sz,sz+13,b)-sz)<<endl;
                }
                else {
                    cout<<(find(jw,jw+12,a)-jw+1)*13<<endl;
                }
            }
            else {
                cout<<(find(sz,sz+13,a)-sz)<<endl;
            }
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