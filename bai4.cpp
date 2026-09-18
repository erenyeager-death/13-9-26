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
    ll n;
    cin>>n;
    vector<ll>a(n);
    ll s=0;
    for (int i=0;i<n;i++){cin>>a[i];s+=a[i];}
    if (s%n!=0){
        cout<<-1;
        return 0;
    }
    s/=n;
    ll res=0;
    for (int i=0;i<n;i++){
        if (s!=a[i])res++;
    }
    cout<<res;
    return 0;
}
