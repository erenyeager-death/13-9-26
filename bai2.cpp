#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll mx=-1e9;
    ll n;
    cin>>n;ll tmp=0;
    while (n--){
        ll a,b;
        cin>>a>>b;
        tmp+=b; tmp-=a;
        mx=max(mx,tmp);

    }
    cout<<mx;
    return 0;
}
