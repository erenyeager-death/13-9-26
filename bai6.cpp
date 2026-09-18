#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""
ll n,m;
const ll dx[]={0,0,1,-1,1,-1,1,-1};
const ll dy[]={-1,1,0,0,1,1,-1,-1};
bool check(ll x, ll y){
    return(0<=x && x<n && 0<=y && y<m);
}

int main()
{
if (fopen(problem".INP","r")){
    freopen(problem".INP","r",stdin);
    freopen(problem".OUT","w",stdout);
}
    //ore wa bukkorosu

    cin>>n>>m;
    vector<vector<char>>a(n,vector<char>(m));
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (a[i][j]!='*'){
                ll c=0;
                for (int k=0;k<8;k++){
                    ll cx=i+dx[k];
                    ll cy=j+dy[k];
                    if (check(cx,cy)&&a[cx][cx]=='*'){
                        c++;
                    }
                }
                cout<<c;
            }
            else cout<<"*";
        }
    }


    return 0;
}
