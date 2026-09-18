#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define problem ""


int main()
{
if (fopen(problem".INP","r")){
    freopen(problem".INP","r",stdin);
    freopen(problem".OUT","w",stdout);
}
    //ore wa bukkorosu
    ll n,m;
    cin>>n>>m;
    vector<vector<char>>a(n,vector<char>(m));
    vector<vector<char>>b(n,vector<char>(m));
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>b[i][j];
        }
    }
    ll res=0;
     for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (a[i][j]!=b[i][j])res++;
        }
    }
    cout<<res;
    return 0;
}
