#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""

ll n,m;
const ll dx[]={0,1,-1,0,0};
const ll dy[]={0,0,0,1,-1};
bool  check(ll x, ll y){
    return(0<=x && x<n && 0<=y && y<m);
}
int main()
{
if (fopen(problem".INP","r")){
    freopen(problem".INP","r",stdin);
    freopen(problem".OUT","w",stdout);
}
    cin>>n>>m;
    vector<vector<ll>>a(n,vector<ll>(m));
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++)cin>>a[i][j];
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            ll c=0;
            for (int k=0;k<5;k++){
                ll cx=dx[k]+i;
                ll cy=dy[k]+j;
                if (check(cx,cy))c+=a[cx][cy];
            }
            cout<<c<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
