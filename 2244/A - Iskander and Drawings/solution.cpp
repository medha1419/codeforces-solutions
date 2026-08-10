#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve()
{
    int l;cin>>l;
    string s;
    cin>>s;
    int maxL=0;
    int local=0;
    for(int i=0;i<l;++i)
    {
        if(s[i]=='#'){local++;}
        else{maxL=max(maxL,local);local=0;}
    }
    maxL=max(maxL,local);
    if(maxL%2==0){cout<<maxL/2<<endl;}
    else{cout<<(maxL/2)+1<<endl;}
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