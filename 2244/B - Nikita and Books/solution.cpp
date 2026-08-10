#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    ll n;cin>>n;
    vector<ll> arr;
    ll s=n;
    while(n--){ll x;cin>>x;arr.push_back(x);}
    ll counter=1;
    for(ll i=0;i<s-1;++i)
    {
        if(counter>arr[i]){cout<<"NO"<<endl;return;}
        arr[i+1]+=arr[i]-counter;
        arr[i]=counter;
        counter++;
    }
    for(ll i=1;i<s;++i)
    {
        if(arr[i]<=arr[i-1]){cout<<"NO"<<endl;return;}
    }
    cout<<"YES"<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        Solve();
    }
    return 0;
}