#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""

ll v,h;
unordered_map<ll,pair<ll,ll>>mp;

int main()
{
if (fopen(problem".INP","r")){
    freopen(problem".INP","r",stdin);
    freopen(problem".OUT","w",stdout);
}
    
    cin>>v>>h;
    mp[0]={4,2};
    mp[1]={2,0};
    mp[2]={2,3};
    mp[3]={2,3};
    mp[4]={3,1};
    mp[5]={2,3};
    mp[6]={3,3};
    mp[7]={2,1};
    mp[8]={4,3};
    mp[9]={3,3};
    for (ll h=1;h<=23;h++){
        for (ll mi=0,mi<=59;mi++){
            ll tmp_v=0;
            ll tmp_h=0;
            if (mi<10){
                tmp_v+=mp[mi].first;
                tmp_h+=mp[mi].second;
            }
            else {
                ll tmp=mi;
                while (tmp!=0){
                    tmp_v+=mp[tmp%10].first;
                    tmp_h+=mp[tmp%10].second;
                }
            }
            if (tmp_v==v&&tmp_h==h){
                cout<<h<<":"<<mi;
                return 0;
            }
        }
    }
    return 0;
}
