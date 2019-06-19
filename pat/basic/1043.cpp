#include<bits/stdc++.h>
using namespace std;
#define LOCAL
#define ll long long int
#define inf 0x3f3f3f3f
#define mset(a,b) memset(a,b,sizeof(a))
const int maxn=1e5+5;
char rules[6]={'P','A','T','e','s','t'};
bool include(char x){
    if(find(rules,rules+6,x)==rules+6){
        return false;
    }
    return true;
}
vector<char> v[6];
void solve(){
    string s;
    cin>>s;
    int len=s.length();
    int cnt=0;
    for(int i=0;i<len;i++){
        if(include(s[i])){
            if(s[i]=='P'){
                v[0].push_back('P');
            }
            else if(s[i]=='A'){
                v[1].push_back('A');
            }
            else if(s[i]=='T'){
                v[2].push_back('T');
            }
            else if(s[i]=='e'){
                v[3].push_back('e');
            }
            else if(s[i]=='s'){
                v[4].push_back('s');
            }
            else if(s[i]=='t'){
                v[5].push_back('t');
            }
            cnt++;
        }
    }

    for(int i=0;i<len;i++){
        if(!v[0].empty()){
            cout<<v[0].back();
            v[0].pop_back();
        }
        if(!v[1].empty()){
            cout<<v[1].back();
            v[1].pop_back();
        }
        if(!v[2].empty()){
            cout<<v[2].back();
            v[2].pop_back();
        }
        if(!v[3].empty()){
            cout<<v[3].back();
            v[3].pop_back();
        }
        if(!v[4].empty()){
            cout<<v[4].back();
            v[4].pop_back();
        }
        if(!v[5].empty()){
            cout<<v[5].back();
            v[5].pop_back();
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