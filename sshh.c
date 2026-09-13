
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<double>a;
    double x;
    while (cin>>x){
        a.push_back(x);
    }
    ll n=a.size();
    double m;
    ll sum=0;
    for (int i=0;i<n;i++)sum+=a[i];
    m=sum/n;
    cout<<fixed<<setprecision(2)<<m<<"\n";
    ll q=0;
    for (int i=0;i<n;i++){
        if (m<a[i])q++;
    }
    cout<<q;
    return 0;
}
